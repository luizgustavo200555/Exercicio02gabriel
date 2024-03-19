int led = 3;
int pont = A0;
int val;
int time;

void setup(){
	pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    val = analogRead(pont);
    val = map(val, 0, 1023, 0, 4);
	Serial.println(val);

    switch (val) {
    case 0:
        digitalWrite(led, LOW);
        break;

    case 1:
        time = 2000 / 4;
        digitalWrite(led, HIGH);
        delay(time);
        digitalWrite(led, LOW);
        delay(time);
        break;
    
    case 2:
        time = 2000 / 3;
        digitalWrite(led, HIGH);
        delay(time);
        digitalWrite(led, LOW);
        delay(time);
        break;
    
    case 3:
        time = 2000 / 2;
        digitalWrite(led, HIGH);
        delay(time);
        digitalWrite(led, LOW);
        delay(time);
        break;
    
    case 4:
        time = 2000 / 1;
        digitalWrite(led, HIGH);
        delay(time);
        digitalWrite(led, LOW);
        delay(time);
        break;
    }
}