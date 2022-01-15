/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                                   003 Sirena                                  **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 14/01/2022 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte xiulet = 9;            // donar nom al pin 9 de l’Arduino
unsigned long temps = 1000;       // definir el temps en ms

//*********************************** SETUP ***************************************
void setup()
{
  pinMode(xiulet, OUTPUT);        // definir el pin 9 com una sortida
}

//************************************ LOOP ***************************************
void loop()
{
  tone(xiulet, 200, temps);       // xiulet de durada temps
  delay(2*temps);                 // esperar "temps" del xiulet + "temps" silenci

  tone(xiulet, 400, temps);       // xiulet de durada temps
  delay(2*temps);                 // esperar "temps" del xiulet + "temps" silenci

  tone(xiulet, 600, temps);       // xiulet de durada temps
  delay(2*temps);                 // esperar "temps" del xiulet + "temps" silenci

  tone(xiulet, 800, temps);       // xiulet de durada temps
  delay(5*temps);                 // esperar "temps" del xiulet + 4*"temps" silenci
}

//********************************** FUNCIONS *************************************
