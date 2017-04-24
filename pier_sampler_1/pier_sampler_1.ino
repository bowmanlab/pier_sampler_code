int sol_B = 2; 
int sol_C = 4;  
int sol_D = 3; 
int sol_A = 12; 
unsigned long time_since_last_reset =0;
int interval_one = 5000;
int interval_two = 8000;
int interval_three = 4000;
boolean check_normal =true;
boolean check_sampling = true;
boolean check_fix = true;


void setup() {
Serial.begin(1200);
delay(2000);
pinMode(sol_A, OUTPUT);
pinMode(sol_B, OUTPUT);
pinMode(sol_D, OUTPUT);
pinMode(sol_C, OUTPUT);
for(int solX_Pin = 5; solX_Pin < 12; solX_Pin++)
{
  pinMode(solX_Pin, OUTPUT);
}
}

void loop() {

for(int solX_Pin = 5; solX_Pin < 12 ; solX_Pin++){

Serial.println(solX_Pin);

time_since_last_reset = millis();
//normal operation
while((millis()-time_since_last_reset)<interval_one){
 digitalWrite(sol_C, LOW);
 digitalWrite(sol_A, HIGH);
 digitalWrite(sol_B, HIGH);
digitalWrite(sol_D, HIGH);
 //digitalWrite(solX_Pin, HIGH);
 Serial.println("normal");
}


//sampling through X for about 2 mins
//Sampling
time_since_last_reset = millis();
while((millis()-time_since_last_reset)<interval_two){
 digitalWrite(solX_Pin, HIGH);
 digitalWrite(sol_B, LOW);
 digitalWrite(sol_D, LOW);
 Serial.println("sampling");

}



time_since_last_reset = millis();
while((millis()-time_since_last_reset)<interval_three){
 digitalWrite(sol_A, LOW);
  digitalWrite(sol_C, HIGH);
digitalWrite(solX_Pin, LOW);
Serial.println("fixative");
}
}
}


//---------------------------- MISC----------------------------
 
 //debugging
// if(check_normal)
 //{
 
  //check A
// int check1_A = digitalRead(sol_A);
 //Serial.println(check1_A);
 //Serial.println("Sol_A during normal:");
 
 
 //check B
 /* int check1_B = digitalRead(sol_B);
 Serial.println(check1_B);
 Serial.println("Sol_B during normal:");
 
 //check C
 
  int check1_C = digitalRead(sol_C);
 Serial.println(check1_C);
 Serial.println("Sol_C during normal:");
 
 */
 //check D
  // int check1_D = digitalRead(sol_D);
 //Serial.println(check1_D);
 //Serial.println("Sol_D during normal:");
 
/// int check1_X = digitalRead(solX_Pin);
 //Serial.println(check1_X);
 //Serial.println("Sol_X during normal:"); 
 
 
 //sampling
 
 
//debugging

//if(check_sampling){
//check X
 //int check2_X = digitalRead(solX_Pin);
 //Serial.println(check2_X);
 //Serial.println("Sol_X during Sampling:"); 

  //debugging

 //check A
// int check2_A = digitalRead(sol_A);
 //Serial.println(check2_A);
 //Serial.println("Sol_A during sampling:");
/* 
 
 //check B
  int check2_B = digitalRead(sol_B);
 Serial.println(check2_B);
 Serial.println("Sol_B during sampling:");
 
  //check C
 
  int check2_C = digitalRead(sol_C);
 Serial.println(check2_C);
 Serial.println("Sol_C during sampling:");
 
 */
 //check D
  /* int check2_D = digitalRead(sol_D);
 Serial.println(check2_D);
 Serial.println("Sol_D during sampling:");
 */
 
 
 ///fixative
 
 
 //debugging
 
 
 //check A
// int check3_A = digitalRead(sol_A);
 //Serial.println(check3_A);
 //Serial.println("Sol_A during fix:");
 
 /*
 //check B
  int check3_B = digitalRead(sol_B);
 Serial.println(check3_B);
 Serial.println("Sol_B during fix:");
 
 //check C
 
  int check3_C = digitalRead(sol_C);
 Serial.println(check3_C);
 Serial.println("Sol_C during fix:");
 */
 /*
 //check D
   int check3_D = digitalRead(sol_D);
 Serial.println(check3_D);
 Serial.println("Sol_D during fix:");
 */
 
 
 
 


