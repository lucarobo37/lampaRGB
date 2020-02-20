int redPin = 7;
int greenPin = 6;
int bluePin = 5;
int buttonAPin = 2;
int buttonBPin = 3;
int pauza = 10;
bool stareLampa = false;
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(buttonAPin, INPUT_PULLUP);
  pinMode(buttonBPin, INPUT_PULLUP);
  randomSeed(analogRead(A0));
}
int randValue = 0;
void loop() {
  if (digitalRead(buttonAPin) == LOW) {
    stareLampa = true;
  }
  if (digitalRead(buttonBPin) == LOW) {
    stareLampa = false;
  }
  if (stareLampa == true) {
    analogWrite(redPin, randValue);
    analogWrite(greenPin, randValue);
    analogWrite(bluePin, randValue);
    delay(pauza);
    randValue++;
    if (randValue > 255)
      randValue = 0;
  }
  else {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);

  }
}
