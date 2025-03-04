//Trafik Lambasi

int kirmizi = 2;
int sari = 3;
int yesil = 4;

void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT); 
}

void loop() {
digitalWrite(2,1);
digitalWrite(3,0);
digitalWrite(4,0);
delay(5000);

digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,0);
delay(1500);

digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(4,1);
delay(4000);

digitalWrite(2,0);
digitalWrite(3,HIGH);
delay(500);
digitalWrite(3,LOW);
delay(500);
digitalWrite(3,HIGH);
delay(500);
digitalWrite(3,LOW);
delay(500);
digitalWrite(3,HIGH);
delay(500);
digitalWrite(3,LOW);
delay(500);
digitalWrite(3,HIGH);
delay(500);
digitalWrite(3,LOW);
delay(500);
digitalWrite(3,HIGH);
delay(300);
digitalWrite(3,LOW);
delay(300);
digitalWrite(3,HIGH);
delay(300);
digitalWrite(3,LOW);
delay(300);
digitalWrite(3,HIGH);
delay(300);
digitalWrite(3,LOW);
delay(300);
digitalWrite(3,HIGH);
delay(300);
digitalWrite(3,LOW);
delay(300);
digitalWrite(4,0);
delay(600);
}
