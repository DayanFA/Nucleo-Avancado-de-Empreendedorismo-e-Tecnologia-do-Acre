int sensorpir = 12;
int led = 13;

void setup()
{
	pinMode(sensorpir,INPUT);
	pinMode(led,OUTPUT);
	Serial.begin(9600);
	digitalWrite(led,LOW);
}

void loop()
{  
	digitalWrite(led,LOW);
	Serial.println(sensorpir);
    if(digitalRead(sensorpir) == HIGH)
    {
    	digitalWrite(led,HIGH);
    	delay(1000);
    	digitalWrite(led,LOW);
    }
}