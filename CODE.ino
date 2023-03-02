



#include <AFMotor.h>                         
#include<Servo.h>                             
Servo m1;                                     
Servo m2;                                     
int pos;                                      
const int trigPin = A0;                       
const int echoPin = A1;                       
const int trigPin1=A2;                        
const int echoPin1=A3;                        
int mpin = A4;                                
int mout;                                     
long duration, duration1;                     
int distance, distance1;                      

AF_DCMotor motor1(1, MOTOR12_1KHZ);           
AF_DCMotor motor2(2, MOTOR12_1KHZ);           
AF_DCMotor motor4(4, MOTOR12_1KHZ);

void setup() {
  Serial.begin(9600);                         
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  pinMode(trigPin1, OUTPUT); 
  pinMode(echoPin1, INPUT);
  m1.attach(10);                             
  m2.attach(9);                              

  m1.write(0);
  m2.write(120);
  
  motor1.setSpeed(255);                      
  motor2.setSpeed(255);                      
}

void loop() 
{
 
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
digitalWrite(trigPin1, LOW);
delayMicroseconds(2);
digitalWrite(trigPin1, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin1, LOW);
duration1 = pulseIn(echoPin1, HIGH);
distance1= duration1*0.034/2;


  if (distance>=15)
 {
 
   Forward();
   delay(100);
 }


 else if(distance<15)

{
  Stop();
  delay(70);
  
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1= duration1*0.034/2;

   if(distance1>=6)
  {
   servoF();
   delay(100);
   }
}
   
   mout=analogRead(mpin);
  
 
  if(distance1<6 && mout<=500)
  
{
  
  servoB();
  delay(100);

  Forward();
  delay(1000);
  
}

  if(distance1<6 && mout>500)
 
 {
   
 while(mout>500)
 {
  
  motor4.run(FORWARD);

  mout=analogRead(mpin);

  if(mout<=500)
  {
  motor4.run(RELEASE);
  delay(100);
  break;
  }
  
 }
 }
 }
void Stop()

{
  

  motor1.run(RELEASE);
  motor2.run(RELEASE);
  
}

void Forward()

{

  
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  
}
void servoF()
{
  
  Serial.println("servo forward is fine");
  delay(100);
  
for (pos=0;pos<=120;pos+=1)

{
 
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1= duration1*0.034/2;

 
 if(distance1>6)
  {
    m1.write(pos);
    m2.write(120-pos);
  }

}

}

void servoB()
{
  Serial.println("Servo back is fine");
  delay(100);
  
  for(pos=120;pos>=0;pos-=1)
  {
    {
    m1.write(pos);
    m2.write(120-pos);
    }
    delay(30);
  }
}                              
