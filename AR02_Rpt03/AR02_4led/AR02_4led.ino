int ledR = 3;   
int ledG = 5;
int ledB = 6;
int ledY = 9;
int dimTime = 10;

void setup()  { 
} 

void loop()  { 
  dimLed(ledR);
  dimLed(ledG);
  dimLed(ledB);
  dimLed(ledY);                   
  } 
void dimLed(int led) {
for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(led, fadeValue);   
    delay(dimTime);
}

for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    analogWrite(led, fadeValue);   
    delay(dimTime);    
}
}
