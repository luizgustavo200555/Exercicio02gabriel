int pot = A0;    
int led = 3;     
int bits = 0;         
int tempo = 0;      

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
   bits = analogRead(pot);  
 
  tempo = map(bits, 0, 1023, 4000, 0);

  if (bits == 0) {
    digitalWrite(led, LOW); 
  } else {
    digitalWrite(led, HIGH); 
   
    delay(tempo);
    digitalWrite(led, LOW); 
    delay(tempo); 
  }
}