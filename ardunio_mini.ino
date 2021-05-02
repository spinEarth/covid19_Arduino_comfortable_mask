

int STBY= 10;
int PWMA = 3;
int AIN1 = 9;
int AIN2 = 8;
int time1 = 0;
int time2 = 0;
float Gas = 0;
float Lift = 0;

 

void setup() {
 pinMode(STBY, OUTPUT);
 pinMode(PWMA, OUTPUT);
 pinMode(AIN1, OUTPUT);
 pinMode(AIN2, OUTPUT);
 pinMode(A0, INPUT);
 Serial.begin(9600);
}



void loop()
 {
  time1 = analogRead(A0);
  delay (350);
  time2 = analogRead(A0);

  Gas = (time2 - time1);
  Lift = Gas / 2;
  Serial.println(Lift);

  
  

  if (Lift > 3)
  {
    digitalWrite(STBY, HIGH);
    
    digitalWrite(AIN1, HIGH);
    digitalWrite(AIN2, LOW);
    analogWrite(PWMA, 255);
    Serial.println("out");
  }
  
  else
  {
    digitalWrite(STBY, HIGH);
    
    
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, HIGH);
    analogWrite(PWMA, 255);
    Serial.println("in");
    }
  
  
  
  
  
}
