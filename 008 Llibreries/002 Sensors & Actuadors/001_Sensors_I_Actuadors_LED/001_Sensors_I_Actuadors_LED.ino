/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                            001 Sensors & Actuadors                            **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 17/01/2022 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte pin3 = 3;                  // donar nom al pin 3 de l'Arduino
const byte pin4 = 4;                  // donar nom al pin 4 de l'Arduino
const byte pin5 = 5;                  // donar nom al pin 5 de l'Arduino
unsigned long temps = 600;            // definir una variable pel temps en ms

//*********************************** SETUP ***************************************
void setup()                          // configura el final de la sortida
{
  pinMode(pin3, OUTPUT);              // definir el pin 3 com a sortida de l'Arduino
  pinMode(pin4, OUTPUT);              // definir el pin 4 com a sortida de l'Arduino
  pinMode(pin5, OUTPUT);              // definir el pin 5 com a sortida de l'Arduino
}

//************************************ LOOP ***************************************
void loop()                           // inicia el bucle del programa
{
  // vermell
  digitalWrite(pin5, HIGH);           // posar a 5 V el pin 5 de l'Arduino
  delay(temps);                       // definir un temps en ms
  
  // verd
  digitalWrite(pin4, HIGH);           // posar a 5 V el pin 4 de l'Arduino
  delay(temps);                       // definir un temps en ms

  // blau
  digitalWrite(pin3, HIGH);           // posar a 5 V el pin 3 de l'Arduino
  delay(temps);                       // definir un temps en ms
}

//********************************** FUNCIONS *************************************
