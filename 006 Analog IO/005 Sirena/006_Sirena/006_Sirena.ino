/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                                   006 Sirena                                  **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 14/01/2022 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte xiulet = 9;                // donar nom al pin 9 de l’Arduino
unsigned long temps = 1000;           // definir un temps en ms
const byte pot0 = A0;                 // donar nom al pin A0 de l’Arduino
const byte pot1 = A1;                 // donar nom al pin A1 de l'Arduino
int valPot0;                          // guardar el valor del potenciòmetre 1
int valPot1;                          // guardar el valor del potenciòmetre 2

//*********************************** SETUP ***************************************
void setup()
{
  pinMode(xiulet, OUTPUT);            // definir el pin 9 com una sortida
}

//************************************ LOOP ***************************************
void loop()
{
  valPot0 = analogRead(pot0);         // llegir el valor del potenciòmetre 1
  valPot1 = analogRead(pot1);         // llegir el valor del potenciòmetre 2
  
  tone(xiulet, valPot1, valPot0);     // xiulet de durada valPot0 i freqüència valPot1
  delay(temps);                       // durada de silenci "temps"
}

//********************************** FUNCIONS *************************************
