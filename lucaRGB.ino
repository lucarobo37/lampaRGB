int redPin = 7;
int greenPin = 6;
int bluePin = 5;
int buttonAPin = 2;
int buttonBPin = 3;
int pauza = 150;
bool stareLampa = false;
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(buttonAPin, INPUT_PULLUP);
  pinMode(buttonBPin, INPUT_PULLUP);
  randomSeed(analogRead(A0));
}
void loop() {
  if (digitalRead(buttonAPin) == LOW) {
    stareLampa = true;
  }
  if (digitalRead(buttonBPin) == LOW) {
    stareLampa = false;
  }
  if (stareLampa == true) {
    int randValue = random(0, 256);
    analogWrite(redPin, randValue);
    randValue = random(0, 256);
    analogWrite(greenPin, randValue);
    randValue = random(0, 256);
    analogWrite(bluePin, randValue);
    delay(pauza);
  }
  else {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);

  }
}
