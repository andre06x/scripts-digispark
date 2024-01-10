#include "DigiKeyboard.h"

#define SETA_ESQUERDA 0x50
#define SETA_CIMA 0x52
#define SETA_DIREITA 0x4F
#define SETA_BAIXO 0x51
#define ESPACO 0x2C
#define KEY_TAB 0x2B

void setup() {
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  delay(2000);
  DigiKeyboard.print("amea"); 
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);
  DigiKeyboard.sendKeyStroke(ESPACO);
    delay(1000);
    DigiKeyboard.sendKeyStroke(SETA_ESQUERDA);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
     delay(800);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(ESPACO);


  
}

void loop() {}
