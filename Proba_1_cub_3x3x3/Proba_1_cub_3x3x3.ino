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
int A = 100;
//******************************* VARIABLES ***************************************

//******************************** SETUP ******************************************

//******************************** SETUP ******************************************
void setup()
{
  pinMode( COL1 , OUTPUT );
  pinMode( FIL1 , OUTPUT );// 1 fila 1
  pinMode( COL2 , OUTPUT );
  pinMode( FIL1 , OUTPUT );// 2 fila 1
  pinMode( COL3 , OUTPUT );
  pinMode( FIL1 , OUTPUT );// 3 fila 1
  pinMode( COL4 , OUTPUT );
  pinMode( FIL1 , OUTPUT );// 4 fila 1
  pinMode( COL5 , OUTPUT );
  pinMode( FIL1 , OUTPUT );// 5 fila 1
  pinMode( COL6 , OUTPUT );
  pinMode( FIL1 , OUTPUT );// 6 fila 1
  pinMode( COL7 , OUTPUT );
  pinMode( FIL1 , OUTPUT );// 7 fila 1
  pinMode( COL8 , OUTPUT );
  pinMode( FIL1 , OUTPUT );// 8 fila 1
  pinMode( COL9 , OUTPUT );
  pinMode( FIL1 , OUTPUT );// 9 fila 1

  pinMode( COL1 , OUTPUT );
  pinMode( FIL2 , OUTPUT );// 1 fila 2
  pinMode( COL2 , OUTPUT );
  pinMode( FIL2 , OUTPUT );// 2 fila 2
  pinMode( COL3 , OUTPUT );
  pinMode( FIL2 , OUTPUT );// 3 fila 2
  pinMode( COL4 , OUTPUT );
  pinMode( FIL2 , OUTPUT );// 4 fila 2
  pinMode( COL5 , OUTPUT );
  pinMode( FIL2 , OUTPUT );// 5 fila 2
  pinMode( COL6 , OUTPUT );
  pinMode( FIL2 , OUTPUT );// 6 fila 2
  pinMode( COL7 , OUTPUT );
  pinMode( FIL2 , OUTPUT );// 7 fila 2
  pinMode( COL8 , OUTPUT );
  pinMode( FIL2 , OUTPUT );// 8 fila 2
  pinMode( COL9 , OUTPUT );
  pinMode( FIL2 , OUTPUT );// 9 fila 2

  pinMode( COL1 , OUTPUT );
  pinMode( FIL3 , OUTPUT );// 1 fila 3
  pinMode( COL2 , OUTPUT );
  pinMode( FIL3 , OUTPUT );// 2 fila 3
  pinMode( COL3 , OUTPUT );
  pinMode( FIL3 , OUTPUT );// 3 fila 3
  pinMode( COL4 , OUTPUT );
  pinMode( FIL3 , OUTPUT );// 4 fila 3
  pinMode( COL5 , OUTPUT );
  pinMode( FIL3 , OUTPUT );// 5 fila 3
  pinMode( COL6 , OUTPUT );
  pinMode( FIL3 , OUTPUT );// 6 fila 3
  pinMode( COL7 , OUTPUT );
  pinMode( FIL3 , OUTPUT );// 7 fila 3
  pinMode( COL8 , OUTPUT );
  pinMode( FIL3 , OUTPUT );// 8 fila 3
  pinMode( COL9 , OUTPUT );
  pinMode( FIL3 , OUTPUT );// 9 fila 3
}

//********************************* LOOP ******************************************
void loop()
{
  // PRIMERA PLANTA

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

  // SEGONA PLANTA

  // 1 fila 2
  digitalWrite (COL1, HIGH);
  digitalWrite (FIL2, HIGH);
  delay(A);
  digitalWrite (COL1, LOW);
  digitalWrite (FIL2, LOW);
  delay(A);

  // 2 fila 2
  digitalWrite (COL2, HIGH);
  digitalWrite (FIL2, HIGH);
  delay(A);
  digitalWrite (COL2, LOW);
  digitalWrite (FIL2, LOW);
  delay(A);

  // 3 fila 2
  digitalWrite (COL3, HIGH);
  digitalWrite (FIL2, HIGH);
  delay(A);
  digitalWrite (COL3, LOW);
  digitalWrite (FIL2, LOW);
  delay(A);

  // 4 fila 2
  digitalWrite (COL4, HIGH);
  digitalWrite (FIL2, HIGH);
  delay(A);
  digitalWrite (COL4, LOW);
  digitalWrite (FIL2, LOW);
  delay(A);

  // 5 fila 2
  digitalWrite (COL5, HIGH);
  digitalWrite (FIL2, HIGH);
  delay(A);
  digitalWrite (COL5, LOW);
  digitalWrite (FIL2, LOW);
  delay(A);
  
  // 6 fila 2
  digitalWrite (COL6, HIGH);
  digitalWrite (FIL2, HIGH);
  delay(A);
  digitalWrite (COL6, LOW);
  digitalWrite (FIL2, LOW);
  delay(A);
  
  // 7 fila 2  
  digitalWrite (COL7, HIGH);
  digitalWrite (FIL2, HIGH);
  delay(A);
  digitalWrite (COL7, LOW);
  digitalWrite (FIL2, LOW);
  delay(A);
  
  // 8 fila 2
  digitalWrite (COL8, HIGH);
  digitalWrite (FIL2, HIGH);
  delay(A);
  digitalWrite (COL8, LOW);
  digitalWrite (FIL2, LOW);
  delay(A);
  
  // 9 fila 2
  digitalWrite (COL9, HIGH);
  digitalWrite (FIL2, HIGH);
  delay(A);
  digitalWrite (COL9, LOW);
  digitalWrite (FIL2, LOW);
  delay(A);

  // TERCERA PLANTA

  // 1 fila 3
  digitalWrite (COL1, HIGH);
  digitalWrite (FIL3, HIGH);
  delay(A);
  digitalWrite (COL1, LOW);
  digitalWrite (FIL3, LOW);
  delay(A);

  // 2 fila 3
  digitalWrite (COL2, HIGH);
  digitalWrite (FIL3, HIGH);
  delay(A);
  digitalWrite (COL2, LOW);
  digitalWrite (FIL3, LOW);
  delay(A);

  // 3 fila 3
  digitalWrite (COL3, HIGH);
  digitalWrite (FIL3, HIGH);
  delay(A);
  digitalWrite (COL3, LOW);
  digitalWrite (FIL3, LOW);
  delay(A);

  // 4 fila 3
  digitalWrite (COL4, HIGH);
  digitalWrite (FIL3, HIGH);
  delay(A);
  digitalWrite (COL4, LOW);
  digitalWrite (FIL3, LOW);
  delay(A);

  // 5 fila 3
  digitalWrite (COL5, HIGH);
  digitalWrite (FIL3, HIGH);
  delay(A);
  digitalWrite (COL5, LOW);
  digitalWrite (FIL3, LOW);
  delay(A);
  
  // 6 fila 3
  digitalWrite (COL6, HIGH);
  digitalWrite (FIL3, HIGH);
  delay(A);
  digitalWrite (COL6, LOW);
  digitalWrite (FIL3, LOW);
  delay(A);
  
  // 7 fila 3
  digitalWrite (COL7, HIGH);
  digitalWrite (FIL3, HIGH);
  delay(A);
  digitalWrite (COL7, LOW);
  digitalWrite (FIL3, LOW);
  delay(A);
  
  // 8 fila 3
  digitalWrite (COL8, HIGH);
  digitalWrite (FIL3, HIGH);
  delay(A);
  digitalWrite (COL8, LOW);
  digitalWrite (FIL3, LOW);
  delay(A);
  
  // 9 fila 3
  digitalWrite (COL9, HIGH);
  digitalWrite (FIL3, HIGH);
  delay(A);
  digitalWrite (COL9, LOW);
  digitalWrite (FIL3, LOW);
  delay(A);

}

//******************************* FUNCIONS ****************************************
