Smart bridge with laser sensor working
 #include <Servo.h>
#define laser1 2
#define sensor1 3
#define LED1 4

#define laser2 5  // New laser and sensor
#define sensor2 6
#define LED2 7      // New LED

 Servo servo1;
 Servo servo2;

void setup() {
  Serial.begin(9600);

  servo1.attach(11); // servo1 setup pin
  servo2.attach(12); // servo2 setup pin


 
  pinMode(laser1, OUTPUT);
  pinMode(sensor1, INPUT);
  pinMode(LED1, OUTPUT);

  pinMode(laser2, OUTPUT);  // New laser and sensor
  pinMode(sensor2, INPUT);
  pinMode(LED2, OUTPUT);

  digitalWrite(laser1, HIGH);
  digitalWrite(laser2, HIGH);
}

void loop() {
  // Read values from sensor 1
  bool value1 = digitalRead(sensor1);
 bool value2 = digitalRead(sensor2);
  if (value1 == LOW && value2 == LOW) {
    //digitalWrite(LED1, HIGH); for led light
      servo1.write(100); // initial servo1 position
  servo2.write(100); 
  //delay(5000);// initial servo2 position

  } else {
    digitalWrite(LED1, LOW);
    servo1.write(0); // for servo1
    servo2.write(0); // for servo2
  }

  // Read values from sensor 2
  // bool value2 = digitalRead(sensor2);

  // if (value2 == LOW) {
  //   digitalWrite(LED2, HIGH);
  //     servo1.write(100); // initial servo1 position
  // servo2.write(100); // initial servo2 position
  // } else {
  //   digitalWrite(LED2, LOW);
  //   servo1.write(0); //servo1;
  //   servo2.write(0); //servo2;
  // }
}