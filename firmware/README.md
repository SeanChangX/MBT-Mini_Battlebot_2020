# Mini Battlebot控制程式

<p align="center">
  <a href="README_EN.md">English</a> |
  <span>繁體中文</span>
</p>

在這個階段您將要寫入[控制程式](Mini_Battlebot_2020/Mini_Battlebot_2020.ino)或自行撰寫程式到Mini Battlebot中。

## 安裝程式庫

在這個範例程式中有使用到一些程式庫，請安裝它們，否則你可能會編譯錯誤。

```markdown
Tools
└─── Manage Libraries
```

- [blynk-library](https://github.com/blynkkk/blynk-library)

## 新增開發板

若您先前從未使用過ESP82662的相關開發板，在此可能遇到一些困難，您可根據這篇[安裝教學](https://randomnerdtutorials.com/how-to-install-esp8266-board-arduino-ide/)進行操作。

開發板管理員網址(ESP8266) 👇 \
http://arduino.esp8266.com/stable/package_esp8266com_index.json

## 修改程式碼

在這個階段您需要設定您的Mini Battlebot所將要連接的**AP**，以及[上一步](../blynk/README.md)所獲得的**Token**

__在“ ”中貼上您的Project Token__
```c#
12      // You should get Auth Token in the Blynk App. 
13      // Go to the Project Settings (nut icon). 
14      char auth[] = "";
```

__在“ ”中貼上您AP的SSID及密碼__
```c#
17      // Your WiFi credentials. 
18      // Set password to "" for open networks. 
19      char ssid[] = ""; 
20      char pass[] = ""; 
```

## 上傳程式碼

在上傳程式碼之前請務必確認以下幾點:

- 是否選擇了正確的**序列埠(COM)**
- 開發板是否選擇了**NodeMCU 1.0(ESP-12E Module)**
