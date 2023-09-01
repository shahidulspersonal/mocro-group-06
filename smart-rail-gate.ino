#include <Servo.h>

Servo myservo;  // Create a servo object

const int ir1Pin = 2;  // IR sensor 1 pin
const int ir2Pin = 3;  // IR sensor 2 pin

int ir1Value = 0;     // Variable to store IR sensor 1 value
int ir2Value = 0;     // Variable to store IR sensor 2 value

void setup() {
  myservo.attach(9);  // Attach servo to pin 9
  myservo.write(0);   // Initialize servo position to 0 degrees
  
  pinMode(ir1Pin, INPUT); // Set IR sensor 1 pin as input
  pinMode(ir2Pin, INPUT); // Set IR sensor 2 pin as input
}

void loop() {
  // Read IR sensor values
  ir1Value = digitalRead(ir1Pin);
  ir2Value = digitalRead(ir2Pin);

  if (ir1Value == HIGH && ir2Value ==LOW) {
    myservo.write(90); // Move servo to 90 degrees if IR sensor 1 detects
  } else if (ir2Value == HIGH && ir1Value == LOW) {
    myservo.write(0);  // Move servo to 0 degrees if IR sensor 2 detects
  }
  
  delay(100); // Delay for stability
}
You sent
done
