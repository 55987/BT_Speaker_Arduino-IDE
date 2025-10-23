# BT_Speaker_Arduino-IDE
使用ESP32 Dev Module开发的一个蓝牙音频接收器。

## 开发平台：
目前只能使用Arduino IDE，PlatformIO无法实现，欢迎各路高手前来开发

使用ESP32+PCM5102驱动，按照Pin5->BCK, Pin19->LCK, Pin18->DIO连线。

# 注意：
该项目使用的是Arduino IDE开发，项目只提供源代码，而且是很久之前写的，涉及到库文件的下载请自行查阅或者我以后再来维护

参考源码：https://github.com/pschatzmann/ESP32-A2DP

参考视频：https://www.bilibili.com/video/BV1rzbWeiE6t/?spm_id_from=333.337.search-card.all.click&vd_source=f2c6a4769fd1e4d89bec669032e8f634

使用该项目需要安装库文件，直接下载源码然后在Arduino IDE上添加库文件(.zip)即可。
