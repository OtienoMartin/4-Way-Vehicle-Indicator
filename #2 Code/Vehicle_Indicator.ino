int blue=D1, green=D2;

void setup() {
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
}

void loop() {
digitalWrite(D1, HIGH);
digitalWrite(D2, HIGH);
delay(500);

digitalWrite(D1, LOW);
digitalWrite(D2, LOW);
delay(500);
}
