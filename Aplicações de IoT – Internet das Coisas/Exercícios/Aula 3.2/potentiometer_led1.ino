#define POT A0
#define LED 2
int Leitura = 0;
void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Leitura = analogRead(POT);
  Serial.println(Leitura);
  delay(200);
  digitalWrite(LED,HIGH);
  delay(Leitura);
  digitalWrite(LED,LOW);
  delay(Leitura);
}