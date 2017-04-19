#include <elapsedMillis.h>
int sol_B = 22; 
int sol_C = 4;  
int sol_D = 3; 
int sol_A = 12; 

elapsedMillis timer0;
#define interval 3000
  
void setup() {
timer0=0;;  
for(int solX_Pin = 5; solX_Pin < 12; solX_Pin++)
{
  pinMode(solX_Pin, OUTPUT);
}pinMode(sol_A, OUTPUT);
pinMode(sol_B, OUTPUT);
pinMode(sol_D, OUTPUT);
pinMode(sol_C, OUTPUT);
}




void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(sol_A, HIGH);
digitalWrite(sol_B, HIGH);
digitalWrite(sol_D, HIGH);

delay(5000);


  //sampling

for(int solX_Pin = 5; solX_Pin < 12 &&timer0 >interval; solX_Pin++){
//X opens
digitalWrite(solX_Pin, HIGH);
 //delay(timer);
//B and D close 
digitalWrite(sol_B, LOW);
digitalWrite(sol_D, LOW);

//A closes 
digitalWrite(sol_A, LOW);

//C opens 
digitalWrite(sol_C, HIGH);

//X closes
digitalWrite(solX_Pin, LOW);

//C closes 
digitalWrite(sol_C, LOW);

//A opens
digitalWrite(sol_A, HIGH);

//B and D open
digitalWrite(sol_B, HIGH);
digitalWrite(sol_D, HIGH);

delay(5000);
  }
 }


