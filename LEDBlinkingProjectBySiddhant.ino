// Code Written by: Siddhant Kumar;
// Registration No.: 1912505;
// On Date: 18/11/2019;
// For: Team Endeavour;


void setup() {
  // put your setup code here, to run once:

  for (int pin = 2; pin <= 11; pin++) {
      pinMode(pin, OUTPUT);
    }

}

void loop() {
  
  int delayTime = 20;
  
  for (int i = 2; i <= 11; i++) {
      digitalWrite(i, HIGH);
      delay(delayTime);
      digitalWrite(i + 2, HIGH);
      delay(delayTime);
      digitalWrite(i + 4, HIGH);
      delay(delayTime);
      digitalWrite(i, LOW);
      delay(delayTime);
      digitalWrite(i + 2, LOW);
    }

   for (int i = 11; i >= 2; i--) {
      digitalWrite(i-1, HIGH);
      delay(delayTime);
      digitalWrite(i - 3, HIGH);
      delay(delayTime);
      digitalWrite(i - 5, HIGH);
      delay(delayTime);
      digitalWrite(i - 1, LOW);
      delay(delayTime);
      digitalWrite(i - 3, LOW);
    }
}
