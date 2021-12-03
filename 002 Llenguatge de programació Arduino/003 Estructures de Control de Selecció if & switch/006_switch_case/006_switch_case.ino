/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**               006 Estructura de Control de Selecció if & switch               **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 29/11/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
int sensorReading = 4;

//*********************************** SETUP ***************************************
void setup()
{
  Serial.begin(9600);

  Serial.print("The day is");

  switch (sensorReading)
  {
    case 0:
      Serial.println(" dark");
      break;
    case 1:
      Serial.println(" dim");
      break;
    case 2:
      Serial.println(" medium");
      break;
    case 3:
      Serial.println(" bright");
      break;
    default:
      Serial.println("... I dont know!!!");
 }
}

//************************************ LOOP ***************************************
void loop()
{
}

//********************************** FUNCIONS *************************************
