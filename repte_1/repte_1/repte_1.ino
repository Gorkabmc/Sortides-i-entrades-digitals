/**********************************************************************************
**                                                                               **
**                     Repte 1. Array de 8 LEDs                                  **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       11/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int LED5 = 5;                         
int LED6 = 6;                       
int LED7 = 7;                         
int LED8 = 8;                         
int LED9 = 9;                         
int LED10 = 10;                     
int LED11 = 11;                       
int LED12 = 12; 
//******************************** SETUP ******************************************
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

//********************************* LOOP ******************************************
void loop()
{
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(300);
}

//******************************* FUNCIONS ****************************************
