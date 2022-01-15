/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                                   002 Sirena                                  **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 14/01/2022 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte xiulet = 9;                // donar nom al pin 9 de l’Arduino
unsigned int frequencia = 1000;       // definir una freqüència en Hz
unsigned long temps = 3000;           // definir un temps en ms

//*********************************** SETUP ***************************************
void setup()
{
  pinMode(xiulet, OUTPUT);            // definir el pin 9 com una sortida
}

//************************************ LOOP ***************************************
void loop()
{
  tone(xiulet, frequencia, temps);    // xiulet de durada 3000 ms
  delay(2*temps);                     // esperar "temps" del xiulet + "temps" silenci
}

//********************************** FUNCIONS *************************************
