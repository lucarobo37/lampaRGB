

const int IN1 = 7;
const int IN2 = 6;
const int IN3 = 5;
const int IN4 = 4;

const int ENA = 9;
const int ENB = 3;
void setup() {
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode (ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  
  pinMode(12, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  




}

void loop() {
  //directie fata
  if (digitalRead(12) == LOW)
  {
    analogWrite (ENA, 225);
    analogWrite (ENB, 225);
    digitalWrite (IN1, LOW);
    digitalWrite (IN2, LOW);
    digitalWrite (IN3,LOW);
    digitalWrite (IN4, HIGH);
  } else
  {

    analogWrite (ENA, 225);
    analogWrite (ENB, 225);
    digitalWrite (IN1, LOW);
    digitalWrite (IN2, LOW);
    digitalWrite (IN3, LOW);
    digitalWrite (IN4, LOW);
  }

 //directie spate
  if (digitalRead(11) == LOW)
  {
    analogWrite (ENA, 225);
    analogWrite (ENB, 225);
    digitalWrite (IN1, LOW);
    digitalWrite (IN2, HIGH);
    digitalWrite (IN3, LOW);
    digitalWrite (IN4, LOW);
  } else
  {
    analogWrite (ENA, 225);
    analogWrite (ENB, 225);
    digitalWrite (IN1, LOW);
    digitalWrite (IN2, LOW);
    digitalWrite (IN3, LOW);
    digitalWrite (IN4, LOW);
  }
}
