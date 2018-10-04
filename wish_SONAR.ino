int trig=13;
int echo=12;
long duration;
int distance;
int rf=10;
int rb=8;
int lf=9;
int lb=7;
void setup(){
  pinMode(13,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(12,INPUT);
  Serial.begin(9600);
}
void loop(){
  digitalWrite(13,LOW);
  delay(2);
  digitalWrite(13,HIGH);
  delay(2);
  digitalWrite(13,LOW);
  delay(2);
  duration= pulseIn(echo,HIGH);
  distance=duration*0.034/2;
  Serial.println(distance);
  Serial.println("cm");
  delay(10);
int distance=digitalRead;
  if("distance>10cm"){
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
     
  }
    if("distance<10cm"){
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
     
  }

}

