int PinA=2;
int PinB=3;
int PinC=4;

void setup() {
  pinMode(PinA, OUTPUT);
  pinMode(PinB, OUTPUT);
  pinMode(PinC, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PinA, HIGH); 
  delay(2000);
  
  digitalWrite(PinA, LOW); 
  digitalWrite(PinB, HIGH);
  delay(2000);
  digitalWrite(PinB, LOW);
  digitalWrite(PinC, HIGH); 
  delay(2000);
  digitalWrite(PinC, LOW); 
}
