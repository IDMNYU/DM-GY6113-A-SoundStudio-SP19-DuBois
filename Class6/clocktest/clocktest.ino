
int thing = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, thing);
  thing = 1-thing;
  delay(100);
}
