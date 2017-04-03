/**********************************************************************************
**                                                                               **
**                          PLANTILLA CFGS                                       **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       22/01/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************
int COL1 = 10;
int COL2 = 9;
int COL3 = 8;
int COL4 = 7;
int COL5 = 6;
int COL6 = 5;
int COL7 = 4;
int COL8 = 3;
int COL9 = 2;
int FIL1 = 11;
int FIL2 = 12;
int FIL3 = 13;
int A = 500;
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
  // 1 fila 1
  digitalWrite (COL1, HIGH);
  digitalWrite (FIL1, HIGH);
  delay(A);
  digitalWrite (COL1, LOW);
  digitalWrite (FIL1, LOW);
  delay(A);
  
  // 2 fila 1
  digitalWrite (COL2, HIGH);
  digitalWrite (FIL1, HIGH);
  delay(A);
  digitalWrite (COL2, LOW);
  digitalWrite (FIL1, LOW);
  delay(A);
  
  // 3 fila 1
  digitalWrite (COL3, HIGH);
  digitalWrite (FIL1, HIGH);
  delay(A);
  digitalWrite (COL3, LOW);
  digitalWrite (FIL1, LOW);
  delay(A);
  
  // 4 fila 1
  digitalWrite (COL4, HIGH);
  digitalWrite (FIL1, HIGH);
  delay(A);
  digitalWrite (COL4, LOW);
  digitalWrite (FIL1, LOW);
  delay(A);
  
  // 5 fila 1
    digitalWrite (COL5, HIGH);
  digitalWrite (FIL1, HIGH);
  delay(A);
  digitalWrite (COL5, LOW);
  digitalWrite (FIL1, LOW);
  delay(A);
  // 6 fila 1
    digitalWrite (COL6, HIGH);
  digitalWrite (FIL1, HIGH);
  delay(A);
  digitalWrite (COL6, LOW);
  digitalWrite (FIL1, LOW);
  delay(A);
  // 7 fila 1
    digitalWrite (COL7, HIGH);
  digitalWrite (FIL1, HIGH);
  delay(A);
  digitalWrite (COL7, LOW);
  digitalWrite (FIL1, LOW);
  delay(A);
  // 8 fila 1
    digitalWrite (COL8, HIGH);
  digitalWrite (FIL1, HIGH);
  delay(A);
  digitalWrite (COL8, LOW);
  digitalWrite (FIL1, LOW);
  delay(A);
  // 9 fila 1
    digitalWrite (COL9, HIGH);
  digitalWrite (FIL1, HIGH);
  delay(A);
  digitalWrite (COL9, LOW);
  digitalWrite (FIL1, LOW);
  delay(A);
}

//******************************* FUNCIONS ****************************************
