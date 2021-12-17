/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                             007-2 Array de 8 LEDs                             **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 15/12/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
unsigned long temps = 300;    // variable que defineix el temps (unsigned long)

//*********************************** SETUP ***************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida

  for (const byte i=0; i <=30; i++)
  
  {
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  
  delay(temps);
  
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  
  delay(temps);
}
}

//************************************ LOOP ***************************************
void loop()
{
}

//********************************** FUNCIONS *************************************
