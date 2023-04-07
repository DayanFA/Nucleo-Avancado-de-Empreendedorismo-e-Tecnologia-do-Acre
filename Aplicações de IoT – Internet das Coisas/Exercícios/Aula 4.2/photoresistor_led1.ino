#define LDR A0
#define LED 2
#define Limiar 0.5

int Leitura = 0;
float Tensao;

void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Leitura = analogRead(LDR);
  Tensao = Leitura * (5.0/1024);
  Serial.println(Tensao);
  if ( Tensao >= Limiar ) 
  {
  	digitalWrite(LED, HIGH);
  }
  else 
  {
  	digitalWrite(LED, LOW);
  }
}