/**********************************************************************************
**                                                                               **
**                          PLANTILLA CFGS                                       **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       22/01/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************
int COL1 = 2;                         
int COL2 = 3;
int COL3 = 4;
int COL4 = 5;
int COL5 = 6;
int COL6 = 7;
int COL7 = 8;
int COL8 = 9;
int COL9 = 10;
int FIL1 = 11;
int FIL2 = 12;
int FIL3 = 13;
//******************************* VARIABLES ***************************************

//******************************** SETUP ******************************************

//******************************** SETUP ******************************************
void setup()
{
  pinMode( COL1 , OUTPUT );
  pinMode( FIL1 , OUTPUT );
  pinMode( COL2 , OUTPUT );
  pinMode( FIL1 , OUTPUT );
}

//********************************* LOOP ******************************************
void loop()
{
  digitalWrite (COL1,HIGH);
  digitalWrite (FIL1,HIGH);
  delay(500);
  digitalWrite (COL1,LOW);
  digitalWrite (FIL1,LOW);
  delay(500);
  digitalWrite (COL2,HIGH);
  digitalWrite (FIL1,HIGH);
  delay(500);
  digitalWrite (COL2,LOW);
  digitalWrite (FIL1,LOW);
  delay(500);
}

//******************************* FUNCIONS ****************************************
