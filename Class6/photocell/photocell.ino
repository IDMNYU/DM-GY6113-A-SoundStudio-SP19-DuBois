
int photocell = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  photocell = analogRead(A0);
  Serial.println(photocell);
  analogWrite(3, photocell/4);
  delay(50);
}
