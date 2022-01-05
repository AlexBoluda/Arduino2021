/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                              010 Array de 8 LEDs                              **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 05/01/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte ledPin[] = {5, 6, 7, 8, 9, 10, 11, 12};   // donar nom en un array als pins 5, 6, 7, 8, 9, 10, 11 i 12
const byte buttonPin2 = 2;                           // donar nom al pin 2 de l’Arduino
const byte buttonPin3 = 3;                           // donar nom al pin 3 de l'Arduino
boolean buttonEstat2 = LOW;                          // definir variable d'estat pel polsador 1
boolean buttonEstat3 = LOW;                          // definir variable d'estat pel polsador 2

int ledNum = 8;                                      // definir variable de número de LEDs
int num = 0;                                         // definir variable del número a mostrar

//*********************************** SETUP ***************************************
void setup()
{
  for(int i = 0; i < ledNum; i++)                    // definir els pins 5, 6, 7, 8, 9, 10, 11 i 12 com sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  pinMode(buttonPin2, INPUT);                        // definir el pin 2 com una entrada
  for(int j = 0; j < ledNum ; j++)                   // els LEDs mostren incialment 0
    { 
      digitalWrite(ledPin[j], 0);
    }
  pinMode(buttonPin3, INPUT);                        // definir el pin 3 com una entrada
  for(int j = 0; j < ledNum ; j++)                   // els LEDs mostren incialment 0
    { 
      digitalWrite(ledPin[j], 0);
    }
}

//************************************ LOOP ***************************************
void loop()
{
  buttonEstat2 = digitalRead(buttonPin2);
  buttonEstat3 = digitalRead(buttonPin3);

  for(int j = 0; j < ledNum ; j++)                   // actualitzar estat LEDs per mostrar número
    {
      digitalWrite(ledPin[j], bitRead(num, j));
    }

  if (buttonEstat2 == LOW)
  { 
    num = num + 1;                                   // incrementar el número a mostrar
    if (num == 256)                                  // si està a 255 i es prem incrementar va a 0
           {
              num = 0;
           } 

    delay(500);                                      // per evitar que en una pulsació curta salti més d'un número 
  }
  
  if (buttonEstat3 == LOW)
  { 
    num = num - 1;                                   // decrementar el número a mostrar
    if (num == 256)                                  // si està a 0 i es prem decrementar va a 255
           {
              num = 0;
           }

    delay(500);                                      // per evitar que en una pulsació curta salti més d'un número 
  }
}
//********************************** FUNCIONS *************************************
