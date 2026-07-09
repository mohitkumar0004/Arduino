const int trigPin = A0; 
const int echoPin = A1;

void setup() {
  Serial.begin(9600);          
  pinMode(trigPin, OUTPUT);    
  pinMode(echoPin, INPUT);     
}

void loop() {
  // Clear the trigPin by setting it LOW
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  
  long duration = pulseIn(echoPin, HIGH);

  // Calculate the distance (speed of sound = 343 m/s or 0.0343 cm/µs)
  // Distance = (duration/2) * 0.0343  (since sound goes out and back)
  float distance = duration * 0.0343 / 2;

  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);  
}
