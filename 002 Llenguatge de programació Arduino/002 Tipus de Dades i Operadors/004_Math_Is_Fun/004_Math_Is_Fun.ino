/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                                004 Math Is Fun                                **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 26/11/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
int a = 5, b = 10, c = 20;

//*********************************** SETUP ***************************************
void setup()
{
  Serial.begin(9600);

  Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");
  Serial.println(a + b);

  Serial.print("a * c = ");
  Serial.println(a * c);
  
  Serial.print("c / b = ");
  Serial.println(c / b);

  Serial.print("c % b = ");
  Serial.println(c % b);
  
  Serial.print("b - c = ");
  Serial.println(b - c);
}

//************************************ LOOP ***************************************
void loop()
{
}

//********************************** FUNCIONS *************************************
