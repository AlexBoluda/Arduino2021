/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                              009 Array de 8 LEDs                              **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 05/01/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte ledPin[] = {5, 6, 7, 8};   // donar nom en un array als pins 5, 6, 7 i 8
const byte buttonPin = 2;             // donar nom al pin 2 de l’Arduino
boolean buttonEstat = LOW;            // definir variable d'estat pel polsador

int ledNum = 4;                       // definir variable de número de LEDs
int num = 0;                          // definir variable del número a mostrar

//*********************************** SETUP ***************************************
void setup()
{
  for(int i = 0; i < ledNum; i++)     // definir els pins 5, 6, 7 i 8 com sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);          // definir el pin 2 com una entrada
  for(int j = 0; j < ledNum ; j++)    // els LEDs mostren incialment 0
    { 
      digitalWrite(ledPin[j], 0);
    }
}

//************************************ LOOP ***************************************
void loop()
{
  buttonEstat = digitalRead(buttonPin);

  for(int j = 0; j < ledNum ; j++)    // actualitzar estat LEDs per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(num, j));
    }
  
  if (buttonEstat == LOW)
  { 
    num = num + 1;                    // incrementar el número a mostrar
    if (num == 16)                    // quan ja ha ensenyat el 15 tornar al 0  
           {
              num = 0;
           }    

    delay(500);                       // per evitar que en una pulsació curta salti més d'un número 
  }
}

//********************************** FUNCIONS *************************************
