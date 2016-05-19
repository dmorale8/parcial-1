long randNumber;
const int ledpin = 13;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode(ledpin, OUTPUT);
}
void loop() {
  randNumber = random(1,50);
  Serial.println(randNumber);
  if (randNumber>25)
  {
    digitalWrite(ledpin, HIGH);
  }
  delay(1000);
  digitalWrite(ledpin, LOW);
}
