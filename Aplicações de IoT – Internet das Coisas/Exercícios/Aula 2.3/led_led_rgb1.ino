int redPin=0;
int greenPin =10;
int bluePin=2;
int red_led = 5;
int green_led = 4;

void setup() 
{    
	pinMode(redPin,OUTPUT);
	pinMode(greenPin,OUTPUT);
	pinMode(bluePin,OUTPUT);
	pinMode(red_led,OUTPUT);
	pinMode(green_led,OUTPUT);
}

void loop() 
{
	digitalWrite(red_led,LOW);
	digitalWrite(green_led,HIGH);  
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
    delay(1000); 
   
    digitalWrite(red_led,LOW);
    digitalWrite(green_led,LOW);   
    digitalWrite(redPin,255);
    digitalWrite(greenPin,255);
    digitalWrite(bluePin,0);
     delay(2000);
 
    digitalWrite(red_led,HIGH );
    digitalWrite(green_led,LOW);  
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
    delay(3000);    
}