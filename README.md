# Splatoon2_Batchgoo_Auto
A sample of how to autopilot Splatoon2 with Arduino.

スプラトゥーン2において、深海メトロD02 バッチ郡島駅を自動周回させるためのスクリプトです。
Arduino Leonardo互換のPro Micro (ATmega32U4)にArduino IDEを用いて入力することを想定しています。
[NintendoSwitchControlLibrary](https://github.com/lefmarna/NintendoSwitchControlLibrary)を使っています。

## 使い方(ここは時間があるときに加筆する)
- ArduinoIDEのVersionを1.8.3にし、上記のリポジトリをクローンするなどしてライブラリに追加
- (STLは必要か？)
- ソースコードを検証しArduinoIDEから書き込む
- 接続時にニュートラルポジション次第でジョイスティックが傾いてる判定がなされて自動的に動き出すこともある模様。


## やること
- Readmeの英語対応
- ダミープラグで出力させてもいいかも
- 現状一度バツチー郡島駅にNamaco端末のカーソルがあった状態での繰り返し処理である
- ~~充電しながら繰り返せるようにテーブルモードに対応させる~~
-- Done!むしろ安定した。
- サブモジュールとして[利用したライブラリのリポジトリ](https://github.com/lefmarna/NintendoSwitchControlLibrary)を含めるといいかも

