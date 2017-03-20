/**********************************************************************************
**                                                                               **
**                         DISPLAY + BUTON                                       **
**                                                                               **
**      GORKA FERNÁNDEZ RAMOS                                  20/03/2017        **
**********************************************************************************/
//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
const int A = 2;  
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;
int pausa = 600;
//******************************** SETUP ******************************************
void setup()
{
  pinMode(A, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(B, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(C, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(D, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(E, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(F, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(G, OUTPUT);     // definir el pin 11 com una sortida
  
  // número 0 
  digitalWrite(A, HIGH);   
  digitalWrite(B, HIGH);     
  digitalWrite(C, HIGH);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH); 
  digitalWrite(F, HIGH);    
  digitalWrite(G, LOW);      

  delay(pausa);              
}
//********************************* LOOP ******************************************
void loop()
{
  // número 1 
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH); 
  digitalWrite(A, LOW);            
  digitalWrite(D, LOW);     
  digitalWrite(E, LOW);     
  digitalWrite(F, LOW);       
  
  delay(pausa);   
            
  // número 2 
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);            
  digitalWrite(C, LOW);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);     
  digitalWrite(G, HIGH);      
    
  delay(pausa);              

  // número 3  
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);            
  digitalWrite(C, HIGH);  
  digitalWrite(D, HIGH);     
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);     
  digitalWrite(G, HIGH);      
    
  delay(pausa);              

  // número 4 
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);            
  digitalWrite(C, HIGH);     
  digitalWrite(D, LOW);     
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);     
  digitalWrite(G, HIGH);       
      
  delay(pausa); 
                
  // número 5 
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);            
  digitalWrite(C, HIGH);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);     
  digitalWrite(G, HIGH);    
        
  delay(pausa);  
              
   // número 6     
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);            
  digitalWrite(C, HIGH);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);     
  digitalWrite(G, HIGH);      
          
  delay(pausa);               
  
  // número 7
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);            
  digitalWrite(C, HIGH);     
  digitalWrite(D, LOW);     
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);     
  digitalWrite(G, HIGH);       
            
  delay(pausa);              

  // número 8  
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);            
  digitalWrite(C, HIGH);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);     
  digitalWrite(G, HIGH);   
              
  delay(pausa);               

  // número 9
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);            
  digitalWrite(C, HIGH);     
  digitalWrite(D, LOW);     
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);     
  digitalWrite(G, HIGH);      
                
  delay(pausa);              

  // número 0 
  digitalWrite(A, HIGH);   
  digitalWrite(B, HIGH);     
  digitalWrite(C, HIGH);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH); 
  digitalWrite(F, HIGH);    
  digitalWrite(G, LOW);    

  delay(pausa);                
}
//******************************* FUNCIONS ****************************************

