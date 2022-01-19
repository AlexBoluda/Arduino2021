/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                            001 Sensors & Actuadors                            **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 17/01/2022 **
**********************************************************************************/

//*********************************** INCLUDE *************************************
#include <LiquidCrystal.h>            // incloure la llibreria LiquidCrystal per poder programar el LCD

//********************************** VARIABLES ************************************
int TRIGGER = 13;                     // donar nom al pin 13 de l'Arduino
int ECHO = 12;                        // donar nom al pin 12 de l'Arduino
LiquidCrystal LCD(2,3,8,9,10,11);     // definir els pins on connectarem els pins de dades

//*********************************** SETUP ***************************************
void setup()                          // configura el final de la sortida
{
  LCD.begin(16,2);                    // indiquem que és una pantalla LCD de 16x2
  pinMode(TRIGGER, OUTPUT);           // definir el pin 13 com a sortida de l'Arduino
  pinMode(ECHO, INPUT);               // definir el pin 12 com a entrada de l'Arduino
  digitalWrite(TRIGGER, LOW);         // inicialitzem el pin amb 0
}

//************************************ LOOP ***************************************
void loop()                           // inicia el bucle del programa
{
  long t;                             // temps en què demora a arribar el senyal d'ECHO
  long d;                             // distància en cm

  digitalWrite(TRIGGER, HIGH);        // enviem un pols a TRIGGER
  delayMicroseconds(10);              // delay de 10 microsegons
  digitalWrite(TRIGGER, LOW);
  t = pulseIn(ECHO, HIGH);            // trobem l'amplada del pols
  d = t/59;                           // fem la relació de la distància (cm) segons el temps

  LCD.clear();
  LCD.print("Distancia = ");
  LCD.setCursor(0, 1);
  LCD.print(d);
  delay(1000);
}

//********************************** FUNCIONS *************************************
