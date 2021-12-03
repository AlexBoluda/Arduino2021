/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**               004 Estructura de Control de Selecció if & switch               **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 29/11/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
int tempAigua = 90;

//*********************************** SETUP ***************************************
void setup()
{
  Serial.begin(9600);

  if (tempAigua < 90)
  {
    Serial.print("Aigua encara no bull");
  } 

  else if (tempAigua >= 90 & tempAigua < 100)
  {
    Serial.print ("Aigua apunt de bullir");
  }
  
  else if (tempAigua == 100)
  {
    Serial.print ("Aigua a 100C");
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
