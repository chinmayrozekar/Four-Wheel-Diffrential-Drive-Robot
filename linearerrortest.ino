//serial.begin(9600)
int count = 5;
int M1DIR = 7;
int M2DIR = 8;
int M1PWM = 9;
int M2PWM = 10;
int enablePin = 4;

void setup() {
  pinMode(enablePin, OUTPUT);
  digitalWrite(enablePin, HIGH);
  pinMode(M1DIR, OUTPUT);
  pinMode(M2DIR, OUTPUT);
  pinMode(M1PWM, OUTPUT);
  pinMode(M2PWM, OUTPUT);



}

void rampup() {
  for (int i = 0; i <= 255; i++) {

    analogWrite(M1PWM, i);
    analogWrite(M2PWM, i);
    delay(count);
  }


}
void rampdown() {


  for (int i = 255; i >= 0; i--) {
    analogWrite(M1PWM, i);
    analogWrite(M2PWM, i);
    delay(count);
  }

}



void loop() {


  for (int i = 0; i < 1000; i++) {

    digitalWrite(M1DIR, HIGH);
    digitalWrite(M2DIR, LOW);
    rampup();
    rampdown();

    delay(10);
    
    digitalWrite(M1DIR, LOW);
    digitalWrite(M2DIR, HIGH);
    rampup();
    rampdown();

    delay(10);
    
    digitalWrite(M1DIR, HIGH);
    digitalWrite(M2DIR, LOW);
    rampup();
    rampdown();

    delay(10);

    digitalWrite(M1DIR, LOW);
    digitalWrite(M2DIR, HIGH);
    rampup();
    rampdown();



    delay(10);


    digitalWrite(M1DIR, HIGH);
    digitalWrite(M2DIR, LOW);
    rampup();
    rampdown();

    digitalWrite(M1DIR, LOW);
    digitalWrite(M2DIR, HIGH);
    rampup();
    rampdown();





    


    while (1);
  }

 
}