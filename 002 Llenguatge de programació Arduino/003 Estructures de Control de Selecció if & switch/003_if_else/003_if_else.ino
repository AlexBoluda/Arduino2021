/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**               003 Estructura de Control de Selecció if & switch               **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 29/11/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
int tempAigua = 99;

//*********************************** SETUP ***************************************
void setup()
{
  Serial.begin(9600);

  if (tempAigua < 100)
  {
    Serial.print("Aigua encara no bull");
  } 
  else
  {
    Serial.print ("Aigua bullint");
  }
}

//************************************ LOOP ***************************************
void loop()
{
}

//********************************** FUNCIONS *************************************
