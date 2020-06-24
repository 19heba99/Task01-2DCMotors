int IN1 = 5;
int IN2 = 4;
int IN3 = 3;
int IN4 = 2;
int sw = 12;

void setup() {
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
pinMode(sw,INPUT_PULLUP);
}

void loop() {

  if ( digitalRead(sw) == 0) {
    digitalWrite(IN1,0);
    digitalWrite(IN2,1);
    digitalWrite(IN4,1);
    digitalWrite(IN3,0);
     delay(2000);
    digitalWrite(IN1,1);
    digitalWrite(IN2,0);
    digitalWrite(IN4,0);
    digitalWrite(IN3,1);
     delay(2000); }
  else { 
    digitalWrite(IN1,0);
    digitalWrite(IN2,0);
    digitalWrite(IN4,0);
    digitalWrite(IN3,0); }

}
