#include <Servo.h>

Servo myservo;
char serial_data;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);     
  myservo.write(90);
}

void loop() {
  while(Serial.available()>0)
  {
    serial_data=Serial.read();
    if (serial_data == 'R')
    {
      myservo.write(30);
      Serial.println("R");    
    }
    else if (serial_data == 'G')
    {
      myservo.write(160);
      Serial.println("G");
    }
    else if (serial_data =='N')
    {
      myservo.write(90);
      Serial.println("N");
    }
  }   
}