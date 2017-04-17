//initialize solenoid valves for arduino digital pins
int sol_A = 4;  
int sol_B = 3;
int sol_D = 2;
int sol_C = 12;
int sol_X1 = 11;
int sol_X2 = 10;
int sol_X3 = 9;
int sol_X4 = 8;
int sol_X5 = 7;
int sol_X6 = 6;
int sol_X7 = 5;
int sampling = 0;

//added temp sensor
int temp_sensor = 5;
void setup() {

  //begin Serial monitor 
Serial.begin(9600);
//set all solenoids to output
pinMode(sol_A, OUTPUT);
pinMode(sol_B, OUTPUT);
pinMode(sol_D, OUTPUT);
pinMode(sol_X1, OUTPUT);
pinMode(sol_X2, OUTPUT);
pinMode(sol_X3, OUTPUT);
pinMode(sol_X4, OUTPUT);
pinMode(sol_X5, OUTPUT);
pinMode(sol_X6, OUTPUT);
pinMode(sol_X7, OUTPUT);
}

void loop() {
  //integrate temp sensor
int reading = analogRead(temp_sensor);

//analog to voltage value
float voltage = reading * 5.0;
voltage /= 1024.0;
float temp_C = (voltage- 0.5) * 100; //celcius temp

Serial.print(temp_C);
//if (temp_C <20) //if in normal condition
if (sampling == 0) //if in normal condition

 //normal operation
digitalWrite(sol_A, HIGH);
digitalWrite(sol_B, HIGH);
digitalWrite(sol_D, HIGH);
delay(5000);
//begin sampling

//X opens
digitalWrite(sol_X1, HIGH);
digitalWrite(sol_X2, HIGH);
digitalWrite(sol_X3, HIGH);
digitalWrite(sol_X4, HIGH);
digitalWrite(sol_X5, HIGH);
digitalWrite(sol_X6, HIGH);
digitalWrite(sol_X7, HIGH);
delay(10000);

//B and D close
digitalWrite(sol_B, LOW);
digitalWrite(sol_D, LOW);
delay(5000);

//A closes
digitalWrite(sol_A, LOW);

//C opens
digitalWrite(sol_C, HIGH);
delay(5000);

//X closes
digitalWrite(sol_X1, LOW);
digitalWrite(sol_X2, LOW);
digitalWrite(sol_X3, LOW);
digitalWrite(sol_X4, LOW);
digitalWrite(sol_X5, LOW);
digitalWrite(sol_X6, LOW);
digitalWrite(sol_X7, LOW);

delay(1000);

//C closes
digitalWrite(sol_C, LOW);

//A opens
digitalWrite(sol_A, HIGH);

//B and D open
digitalWrite(sol_B, HIGH);
digitalWrite(sol_D, HIGH);


delay(1000);
}


