#define LED 2
#define BOTAO 3
int Leitura = LOW;
int Estado = LOW;
void setup()
{
 	pinMode(LED, OUTPUT);
  	pinMode(BOTAO, INPUT);
}

void loop()
{
	Leitura = digitalRead(BOTAO);
  	if ( Leitura == HIGH ) 
    {
    	Estado = !Estado;
    	delay(250);
  	}
  	if ( Estado == HIGH ) 
    {
  		digitalWrite(LED, HIGH);
  	}
  	else 
    { 
    	digitalWrite(LED, LOW);
  	}
}