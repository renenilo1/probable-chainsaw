
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for (int j=1; j<=10; j++)
  {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000*j);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000*j);
  }
}
