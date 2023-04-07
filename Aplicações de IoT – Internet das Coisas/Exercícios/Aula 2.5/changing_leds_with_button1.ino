int redPin=0;
int led2pin=10;
int bluePin=2;
int led1Pin = 4;
int led3pin = 5;
#define led5pin 7
#define led4pin 6
int val;
int val2;
int buttonState;
int Mode = 0;
int switchPin = 3;

void setup() 
{   
	pinMode(redPin,OUTPUT);
	pinMode(led2pin,OUTPUT);
	pinMode(bluePin,OUTPUT);
	pinMode(led1Pin,OUTPUT);
	pinMode(led2pin,OUTPUT);
	pinMode(led3pin,OUTPUT);
	pinMode(led4pin,OUTPUT);
    pinMode(led5pin,OUTPUT);
    pinMode(switchPin, INPUT);
    buttonState = digitalRead(switchPin); 
}

void loop() 
{
	val = digitalRead(switchPin);
    delay(10);
    val2 = digitalRead(switchPin);
    if (val == val2) 
    {
    	if (val != buttonState) 
    	{
      		if (val == LOW) 
            {
        		if (Mode == 0) 
                {
          		Mode = 1;
        		} 
              	else 
                {
          			if (Mode == 1) 
                    {
            			Mode = 2;
          			} 
                  	else 
                    {
            			if (Mode == 2) 
                        {
              				Mode = 3;
            			} 
                      	else 
                        {
              				if (Mode == 3) 
                            {
                				Mode = 4;
                			} 
                          	else 
                            {
              					if (Mode == 4) 
                                {
                					Mode = 5;
                				} 
                              	else 	
                                {
              					if (Mode == 5) 
                                {
                					Mode = 0;
              					}
              				}
              
              			}
            		}
          		}
        	}
      	}
	}
    buttonState = val;
}
  if (Mode == 0) 
  { 
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2pin, LOW);
    digitalWrite(led3pin, LOW);
    digitalWrite(led4pin, LOW);
    digitalWrite(led5pin, LOW);
  }
  if (Mode == 1) 
  {
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2pin, LOW);
    digitalWrite(led3pin, LOW);
    digitalWrite(led4pin, LOW);
    digitalWrite(led5pin, LOW);
  }
  if (Mode == 2) 
  {
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2pin, HIGH);
    digitalWrite(led3pin, LOW);
    digitalWrite(led4pin, LOW);
    digitalWrite(led5pin, LOW);
  }
  if (Mode == 3) 
  {
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2pin, LOW);
    digitalWrite(led3pin, HIGH);
    digitalWrite(led4pin, LOW);
    digitalWrite(led5pin, LOW);
  }
  if (Mode == 4) 
  {
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2pin, LOW);
    digitalWrite(led3pin, LOW);
    digitalWrite(led4pin, HIGH);
    digitalWrite(led5pin, LOW);
  }
  if (Mode == 5) 
  {
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2pin, LOW);
    digitalWrite(led3pin, LOW);
    digitalWrite(led4pin, LOW);
    digitalWrite(led5pin, HIGH);
  }
}