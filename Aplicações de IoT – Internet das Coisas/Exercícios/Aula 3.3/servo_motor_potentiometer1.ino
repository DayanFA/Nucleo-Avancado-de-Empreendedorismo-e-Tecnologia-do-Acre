#include <Servo.h> 
#define SERVO 3
Servo meuservo;
int Leitura = 0;
void setup()
{
  Serial.begin(9600);
  meuservo.attach(SERVO);
}
void loop()
{
  Leitura = analogRead(A0);
  Leitura = map(Leitura, 0, 1023, 0, 179);
  meuservo.write(Leitura);
  delay(100);
}