#include <Arduino.h>

/**************************Definición de constantes y variables *****************/
const int16_t LED_VERDE=2;
const int16_t LED_AMARILLO=3;
const int16_t LED_ROJO=4;
const int16_t SW1=10;
/*******************************************************************************/
bool apagarLeds(int16_t leds[],int16_t len);
void setup() {
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_ROJO, OUTPUT);
  pinMode(SW1, INPUT);

}

void loop() {
  int16_t leds[]={LED_VERDE,LED_AMARILLO,LED_ROJO};
  int16_t len=sizeof(leds)/sizeof(int16_t);                                //Aqui se define la longitud del arreglo
  while (1) {
    for(int16_t i=0;i<len;i++){
      apagarLeds(leds, len);
      digitalWrite(leds[i],HIGH);
      delay(500);
    }
  }
}

