/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                            001 Sensors & Actuadors                            **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 17/01/2022 **
**********************************************************************************/

//*********************************** INCLUDE *************************************
#include <Servo.h>                                         // incluir la biblioteca Servo

//********************************** VARIABLES ************************************
Servo MicroServo;                                          // definir el Servo que utilitzaré
int posMicroServo;                                         // definir la variable per a la posició del Servo
const byte pot1 = A0;                                      // donar nom al pin A0 de l'Arduino

//*********************************** SETUP ***************************************
void setup()                                               // configura el final de la sortida
{
  MicroServo.attach(9);                                    // definir el pin 9 com una sortida
}

//************************************ LOOP ***************************************
void loop()                                                // inicia el bucle del programa
{
  posMicroServo = analogRead(pot1);                        // llegir el valor del potenciòmetre 1
  posMicroServo = map (posMicroServo, 0, 1023, 0, 180);    // valor proporcional a l'escala del MicroServo (valor entre o i 180)
  
  MicroServo.write(posMicroServo);                         // donar valor (valPot1) al Servo
  delay(10);                                               // atura el programa durant la quantitat de temps en ms
}

//********************************** FUNCIONS *************************************
