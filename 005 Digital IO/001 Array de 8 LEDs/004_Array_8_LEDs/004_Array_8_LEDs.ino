/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                              004 Array de 8 LEDs                              **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 15/12/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte led0 = 5;              // donar nom al pin 5 de l’Arduino
const byte buttonPin = 2;        // donar nom al pin 2 de l’Arduino
byte buttonState = 0;           // per guardar l’estat en que és troba el button

//*********************************** SETUP ***************************************
void setup()
{
  pinMode(led0, OUTPUT);          // definir el pin 5 com una sortida
  pinMode(buttonPin, INPUT);     // definir el pin 2 com una entrada  
}

//************************************ LOOP ***************************************
void loop()
{
  buttonState = digitalRead(buttonPin);          //llegir l’estat del button i guardar-lo
  
  if (buttonState == 0)                         //polsador premut, muntat amb Pull-up
  {
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  }
  
  else                                         //polsador no premut, muntat amb Pull-up
  {
  digitalWrite(led0, LOW);    // posar a 0V el pin 5
  }
  
  delay(200);                                 //per no estar llegint button molt ràpid
}

//********************************** FUNCIONS *************************************
