#include <Servo.h>

// C++ code
//
const int potPin = A0;
Servo servo;
void setup()
{
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  servo.attach(2);
}

void loop()
{
  int potValue = analogRead(potPin);
  Serial.println(potValue);
  int servoAngle = map(potValue, 0, 1023, 0, 180);
  
  servo.write(servoAngle);
  Serial.println(potValue);
}