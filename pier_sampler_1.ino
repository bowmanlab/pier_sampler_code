int sol_A = 4;  //bjt base pin
int sol_B = 8;
int sol_D = 9;
int sampling = 0;

//added temp sensor
int temp_sensor = 5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(sol_A, OUTPUT);
pinMode(sol_B, OUTPUT);
pinMode(sol_D, OUTPUT);
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
{
digitalWrite(sol_A, HIGH);
digitalWrite(sol_B, HIGH);
digitalWrite(sol_D, HIGH);
//delay(1000);
//digitalWrite(sol_A, LOW);
//delay(1000);
//digitalWrite(sol_B, LOW);
//delay(1000);
}

//sampling operation
else   
{
digitalWrite(sol_X, HIGH);
delay(xxxx);
digitalWrite(sol_B, LOW);
digitalWrite(sol_D, LOW);
delay(xxxx);
digitalWrite(sol_A, LOW);
delay(xxxx);
digitalWrite(sol_C, HIGH);
delay(xxxx);
digitalWrite(sol_X, LOW);
delay(xxxx);
digitalWrite(sol_C, LOW);
delay(xxxx);
digitalWrite(sol_A, HIGH);
delay(xxxx);
digitalWrite(sol_B, HIGH);
delay(xxxx);
digitalWrite(sol_D, HIGH);
delay(xxxx);
}
