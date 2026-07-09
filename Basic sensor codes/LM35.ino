#define LM35 A0 // defining pin for sensor 
int sensorval = 0;// initializing the value to 0 to get accurate reading 

void setup() {
  pinMode(LM35,INPUT); //LM 35 is a analog sensor from which we expect a value so we set pinmode to  INPUT so arduino can easily take input from sensor
  Serial.begin(9600); // setting baudh rate to 9600
 
  // put your setup code here, to run once:

}

void loop() {
  sensorval=analogRead(LM35); //reading the input sent by sensor to microcontroller
  Serial.println(sensorval);// printing the value on serial monitor
  delay(1000);//delay between each print (1 second)
  

  // put your main code here, to run repeatedly:

}
