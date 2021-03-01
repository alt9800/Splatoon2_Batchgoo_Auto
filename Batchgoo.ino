#include <NintendoSwitchControlLibrary.h>
void setup() {
}

int loopCount = 0;
void loop() {

  if (loopCount == 100)
    {
    pushButton(Button::B, 500, 5); //接続時の入力待ちをしながらデバッグしやすくしておく
    pushButton(Button::Y,3000); //視野合わせ
    pushButton(Button::X,3000); //XボタンでNAMACOを開く
    pushButton(Button::A,3000); //Aボタンでフォーカス
    pushButton(Button::A,12000); //Aボタンでバツチー郡に入る
    pushButton(Button::A,1000); //Aボタンで自動起動したリッター4Kを選ぶ
    pushButton(Button::Y,500); //Yボタンで視界を調整
    tiltLeftStick(128, 0, 1750); //左スティック5歩前に 左上が0,0でニュートラルが128,128
    delay(30);
    pushButton(Button::A, 10000); //Aで500P支払い
    tiltRightStick(110, 128, 1000); //右スティックを少し左にずらして待機
    holdButton(Button::ZR, 5750); //往復してきた奴を狙い撃ち
    pushButton(Button::A); // Aでチャプターを進める
    delay(10000);
    }
  loopCount++;
}
