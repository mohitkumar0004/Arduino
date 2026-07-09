char data;

void setup() {
  pinMode(13, OUTPUT);   // Built-in LED
  Serial.begin(9600);    // Bluetooth default baud rate
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();

    if (data == '1') {
      digitalWrite(13, HIGH);  // LED ON
    }
    else if (data == '0') {
      digitalWrite(13, LOW);   // LED OFF
    }
  }
}
