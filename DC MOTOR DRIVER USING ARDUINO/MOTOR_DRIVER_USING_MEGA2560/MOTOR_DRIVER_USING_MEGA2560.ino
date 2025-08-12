// Motor connected to OUTPUT B on L298N
// IN3 -> Arduino pin 8
// IN4 -> Arduino pin 7
// ENB (Enable B) -> Arduino pin 9 (PWM)

int IN3 = 8;
int IN4 = 7;
int ENB = 9;

void setup() {
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop() {
  // Forward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 255); // Full speed
  delay(2000);

  // Stop
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(1000);

  // Reverse
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 255); // Full speed
  delay(2000);

  // Stop
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(1000);
}
