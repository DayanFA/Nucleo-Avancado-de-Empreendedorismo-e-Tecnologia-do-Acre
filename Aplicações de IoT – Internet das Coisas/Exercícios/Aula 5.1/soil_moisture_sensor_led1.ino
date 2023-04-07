int moist=0;
int led=7;
float moistp;

void setup()
{
	Serial.begin(9600);
    pinMode(led,OUTPUT);
}
 
void loop()
{
	moist = analogRead(A0);
    moistp = ((moist/1023.00)*100);
    Serial.print("Umidade = ");
    Serial.print(moistp);
    Serial.print("%\n");
    delay(1000);
	if (moistp <= 35.0) 
    {
        digitalWrite(led, HIGH);
    }
    else
    {
    	if (moistp > 35.0) 
        {
        	digitalWrite(led, LOW);
        }
    }
}