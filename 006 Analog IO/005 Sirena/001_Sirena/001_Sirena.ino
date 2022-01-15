/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                                   001 Sirena                                  **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 14/01/2022 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte xiulet = 9;            // donar nom al pin 9 de l’Arduino
const byte pot0 = A0;             // donar nom al pin A0 de l’Arduino
int valPot0;                      // guardar valor del potenciòmetre  

//*********************************** SETUP ***************************************
void setup()
{
  pinMode(xiulet, OUTPUT);        // definir el pin 9 com una sortida
}

//************************************ LOOP ***************************************
void loop()
{
  valPot0 = analogRead(pot0);     // llegir valor del potenciòmetre 

  tone(xiulet, 800, valPot0);     // xiulet de durada valPot0
  delay(2*valPot0);               // esperar valPot0 del xiulet + valPot0 silenci
}

//********************************** FUNCIONS *************************************
