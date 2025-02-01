//serial.begin(9600)
int count = 5;
int M1DIR = 7;
int M2DIR = 8;
int M1PWM = 9;
int M2PWM = 10;
int enablePin = 4;
int analogpin= 0;
int var=0;
int x=0;
void setup() {
  pinMode(enablePin, OUTPUT);
  digitalWrite(enablePin, HIGH);
  pinMode(M1DIR, OUTPUT);
  pinMode(M2DIR, OUTPUT);
  pinMode(M1PWM, OUTPUT);
  pinMode(M2PWM, OUTPUT);
  pinMode(analogpin, INPUT);
  Serial.begin(9600);


}





void straight(){
  
    digitalWrite(M1DIR, HIGH);
    digitalWrite(M2DIR, LOW);
    analogWrite(M1PWM, x);
    analogWrite(M2PWM, x);

 
}




void turn(){
  
    digitalWrite(M1DIR, HIGH);
    digitalWrite(M2DIR, HIGH);
    analogWrite(M1PWM, x);
    analogWrite(M2PWM, x);
   
   
  
}


void loop()
{
  var=analogRead(analogpin);
  Serial.println(var);

        
  
  if(var>200)
  {  
    x=150;
    turn();
    delay(500);
 
  } 
  else
  {  
    x=150;
    straight();
  
    
    

  }

  //while (1);
}