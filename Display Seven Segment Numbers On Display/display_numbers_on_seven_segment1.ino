// Define segment pins
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void setup() {
  // Set all segment pins as OUTPUT
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  displayDigit(0);
  delay(1000);
  displayDigit(1);
  delay(1000);
  displayDigit(2);
  delay(1000);
  displayDigit(3);
  delay(1000);
  displayDigit(4);
  delay(1000);
  displayDigit(5);
  delay(1000);
  displayDigit(6);
  delay(1000);
  displayDigit(7);
  delay(1000);
  displayDigit(8);
  delay(1000);
  displayDigit(9);
  delay(1000);
}

// Function to display digits 0–9
void displayDigit(int digit) {
  // Turn OFF all segments first
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

  switch (digit) {
    case 0:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,HIGH); digitalWrite(f,HIGH);
      break;
    case 1:
      digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      break;
    case 2:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(g,HIGH);
      digitalWrite(e,HIGH); digitalWrite(d,HIGH);
      break;
    case 3:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(g,HIGH);
      break;
    case 4:
      digitalWrite(f,HIGH); digitalWrite(g,HIGH);
      digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      break;
    case 5:
      digitalWrite(a,HIGH); digitalWrite(f,HIGH);
      digitalWrite(g,HIGH); digitalWrite(c,HIGH); digitalWrite(d,HIGH);
      break;
    case 6:
      digitalWrite(a,HIGH); digitalWrite(f,HIGH); digitalWrite(e,HIGH);
      digitalWrite(d,HIGH); digitalWrite(c,HIGH); digitalWrite(g,HIGH);
      break;
    case 7:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      break;
    case 8:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,HIGH); digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
    case 9:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(f,HIGH); digitalWrite(g,HIGH);
      break;
  }
}
