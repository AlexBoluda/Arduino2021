/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                              008 Array de 8 LEDs                              **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 05/01/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte ledPin[] = {5, 6, 7, 8};   // donar nom en un array als pins 5, 6, 7 i 8
byte ledNum = 4;                      // definir variable de número de LEDs
unsigned long pausa = 1000;           // definir variable de temps en ms

//*********************************** SETUP ***************************************
void setup()
{
  for(byte i = 0; i < ledNum; i++)    // definir els pins 5, 6, 7 i 8 com sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

//************************************ LOOP ***************************************
void loop()
{
  for(int i = 0; i < 16; i++)         // mostrar del 0 al 15
  {
    for(int j = 0; j < ledNum ; j++)  // actualitzar estat LEDs per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(i, j));
    }
    delay(pausa);                     // es queden LEDs en pausa (ms) en aquest estat
  }
}

//********************************** FUNCIONS *************************************
