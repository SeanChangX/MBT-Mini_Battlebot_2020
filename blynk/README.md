# 設置您的Blynk控制端

<p align="center">
  <a href="README_EN.md">English</a> |
  <span>繁體中文</span>
</p>

在寫入控制程式後，我們將需要設置手機上的[Blynk APP](https://blynk.io/en/getting-started)([IOS](https://itunes.apple.com/us/app/blynk-iot-for-arduino-esp32/id808760481?mt=8),[Android](https://play.google.com/store/apps/details?id=cc.blynk&hl=en_US))，用來作爲Mini Battlebot遠端控制中的控制端。

## 建立New Project

在Blynk APP安裝完成之後，請您將它開啓並**注冊**或**登錄**，若登錄成功您將會看到以下畫面👇

**請點擊右上方的QR Code ICON**

<a>
  <img align="center" alt="Blynk APP" width="35%" src="../docs/images/blynk001.jpg" />
</a>

## 

接下來您將看到以下畫面👇

<a>
  <img align="center" alt="Blynk APP" width="35%" src="../docs/images/blynk002.jpg" />
</a>

以下有兩種方式進行操作
- 掃描下方的QR Code
- 匯入QR Code[圖檔](../docs/images/blynk003.png)(點擊右上方**文件ICON**)

<a>
  <img align="center" alt="QR Code" width="35%" src="../docs/images/blynk003.png" />
</a>

## 

匯入Project之後，您將看到以下按鈕配置👇

__因不同設備的螢幕比例差異，您可長按按鈕進行拖曳調整__

<a>
  <img align="center" alt="Blynk APP" width="35%" src="../docs/images/blynk004.jpg" />
</a>

__請點擊右上方[齒輪ICON]__

## 

接下來您將看到以下畫面👇

<a>
  <img align="center" alt="Blynk APP" width="35%" src="../docs/images/blynk005.jpg" />
</a>

請點擊下方按鈕獲取**AUTH TOKENS**

⚠注意! 請保存好這個Token，我們將在下一步[寫入程式](../firmware/README.md)用到它。

- 若點擊左下角**Email all**按鈕，您將在**注冊時輸入的Email**會獲得這個Project的**Token**
- 若點擊右下角**Copy all**，您將可貼上**Token**在任意一處

## 下一步

寫入程式 [Arduino Code](../firmware/README.md)
