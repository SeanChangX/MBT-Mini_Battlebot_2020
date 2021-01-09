/*
         [ UPDATE ]       [ AUTHOR ]
        =2021.01.09=     =Sean Chang=
*/

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <WiFiManager.h>
#include <Servo.h>
Servo servo_1;

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "";

int PWMA = 5; //Right side
int PWMB = 4; //Left side
int DA = 0;   //Right reverse
int DB = 2;   //Left reverse
int WP = 0;
int SW = 0;
int V_0 = 0, V_1 = 0, V_2 = 0;


void setup() {
  Serial.begin(9600);

  WiFiManager wifiManager;
  wifiManager.autoConnect("MBTX", "MBTX2021");
  Serial.println("= WiFi Connected =");
  Blynk.config(auth);

  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(DA, OUTPUT);
  pinMode(DB, OUTPUT);
  servo_1.attach(15); // 15 means D8 pin of ESP8266

}

void loop() {
  Blynk.run();
  weapon();
  setting();
}

void setting() {
  V_0 = 0;
  V_1 = 0;
}

void weapon() {
  if (SW == 0 && WP == 0) {
    servo_1.write(90);
  } else if (SW < 1 && WP > 0) {
    servo_1.write(180);
  } else if (SW > 0 && WP < 1) {
    servo_1.write(90);
  } else if (SW > 0 && WP > 0) {
    servo_1.write(0);
  }
}

// Handling Joystick data
BLYNK_WRITE(V0) {
  int x = param[0].asInt();
  int y = param[1].asInt();

  if (V_2 == 0) {
    V_0 = 1;
    if (x > 50) {
      analogWrite(PWMA, x);
      digitalWrite(DA, HIGH);
    } else if (x < 50) {
      analogWrite(PWMA, abs(x));
      digitalWrite(DA, LOW);
    }
  }
}

BLYNK_WRITE(V1) {
  int x = param[0].asInt();
  int y = param[1].asInt();

  if (V_2 == 0) {
    V_0 = 1;
    if (x > 50) {
      analogWrite(PWMB, x);
      digitalWrite(DB, HIGH);
    } else if (x < 50) {
      analogWrite(PWMB, abs(x));
      digitalWrite(DB, LOW);
    }
  }
}

BLYNK_WRITE(V2) {
  int z = param[0].asInt();

  if (V_0 == 0 && V_1 == 0) {
    if (z == 1) {
      V_2 = 1;
      digitalWrite(PWMA, HIGH);
      digitalWrite(DA, HIGH);

      digitalWrite(PWMB, HIGH);
      digitalWrite(DB, HIGH);
    } else if (z == 0) {
      V_2 = 0;
      digitalWrite(PWMA, LOW);
      digitalWrite(DA, LOW);

      digitalWrite(PWMB, LOW);
      digitalWrite(DB, LOW);
    }
  }
}

BLYNK_WRITE(V3) {
  int Weapon = param.asInt();
  WP = Weapon;
}

BLYNK_WRITE(V4) {
  int Switch = param.asInt();
  SW = Switch;
}
