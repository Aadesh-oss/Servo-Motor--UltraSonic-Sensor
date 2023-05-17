#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;

int trigPin = 53;
int echoPin = 51;
long distance;
long duration;
 
void setup() 
{
servo1.attach(49);
servo2.attach(47);
servo2.attach(45); 
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);// put your setup code here, to run once:
}
 
void loop() {
  ultra();
  servo1.write(0);
   servo2.write(0);
   servo3.write(0);
   
  if(distance <= 1){
  servo1.write(50);
   servo2.write(50);
    servo3.write(50);
  delay(1000);
  }
}
 
void ultra(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  }
