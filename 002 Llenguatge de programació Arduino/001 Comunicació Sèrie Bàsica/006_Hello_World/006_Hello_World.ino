/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                                006 Hello World                                **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 22/11/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
float y1;
float y2;
float y3;

//*********************************** SETUP ***************************************
void setup()
{
  Serial.begin(9600);
}

//************************************ LOOP ***************************************
void loop()
{
for(int i = 0; i < 360; i += 5) {
  y1 = 1 * sin(i * M_PI / 180);
  y2 = 2 * sin((i + 90)* M_PI / 180);
  y3 = 5 * sin((i + 180)* M_PI / 180);
  
  Serial.print(y1);
  Serial.print("\t");  //space ' ' or tab '\t' char is printed between the 2 values
  Serial.print(y2);
  Serial.print("\t");  //space ' ' or tab '\t' char is printed between the 2 values
  Serial.println(y3);  //last value is followed by a carriage return and a newline char
  
  delay(100);
 }
}

//********************************** FUNCIONS *************************************
