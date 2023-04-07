int celsius = 0;
int fahrenheit = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
    celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
    fahrenheit = ((celsius * 9) / 5 + 32);
    Serial.print(celsius);
    Serial.print(" C, ");
    Serial.print(fahrenheit);
    Serial.println(" F");
    if (celsius <=30 ) 
    {
    	digitalWrite(2, HIGH);
    	digitalWrite(3, LOW);
    	digitalWrite(4, LOW);
  	}
    if (celsius >=31 && celsius <= 50) 
    {
    	digitalWrite(2, LOW);
    	digitalWrite(3, HIGH);
    	digitalWrite(4, LOW);
  	}
    if (celsius >= 51) 
    {
    	digitalWrite(2, LOW);
    	digitalWrite(3, LOW);
    	digitalWrite(4, HIGH);
    }
    delay(1000); 
}