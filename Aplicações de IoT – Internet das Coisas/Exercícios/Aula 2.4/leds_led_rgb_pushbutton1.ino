int redPin=0;
int bluePin =10;
int greenPin=2;
int red_led = 4;
int green_led = 5;
#define ledgreen 7
#define ledred 6
#define buttom 3
int Leitura = 0;

void setup() 
{   
	pinMode(redPin,OUTPUT);
	pinMode(greenPin,OUTPUT);
	pinMode(bluePin,OUTPUT);
	pinMode(red_led,OUTPUT);
	pinMode(green_led,OUTPUT);
	pinMode(ledgreen,OUTPUT);
	pinMode(ledred,OUTPUT);
	pinMode(buttom,INPUT);
}

void loop() 
{
	Leitura= digitalRead(buttom);
    if(Leitura == HIGH) 
    {
    	digitalWrite(red_led,HIGH );
    	digitalWrite(ledgreen,HIGH );
    	delay(10000);
	}
  	else 
    {
    	digitalWrite(red_led,LOW);
  		digitalWrite(green_led,HIGH);  
        digitalWrite(ledred,HIGH );
   		digitalWrite(ledgreen,LOW );
  		digitalWrite(redPin,LOW);
  		digitalWrite(greenPin,LOW);
  		digitalWrite(bluePin,LOW);
     	delay(1000); 
  		digitalWrite(red_led,LOW);
  		digitalWrite(green_led,LOW);  
        digitalWrite(ledred,HIGH );
    	digitalWrite(ledgreen,LOW );
 		digitalWrite(redPin,255);
 	    digitalWrite(greenPin,255);
  		digitalWrite(bluePin,0);
    	delay(2000);
  		digitalWrite(red_led,HIGH );
  		digitalWrite(green_led,LOW);  
        digitalWrite(ledred,LOW );
    	digitalWrite(ledgreen,HIGH );
  		digitalWrite(redPin,LOW);
   		digitalWrite(greenPin,LOW);
  		digitalWrite(bluePin,LOW);
      	delay(3000); 
  	}   
}