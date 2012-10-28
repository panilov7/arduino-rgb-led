/*
This sketch controls an RGB LED
  This article and code helped me a lot: http://www.mbeckler.org/microcontrollers/rgb_led/
 */

// The pins for the LED
int redLED = 3;
int greenLED = 6;
int blueLED = 5;
int gndPin = 4;

#define RED 1
#define GREEN 2
#define BLUE 3

void setup(){
  // declare the led pins as outputs
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(gndPin, OUTPUT);
  digitalWrite(gndPin, LOW);
}

void loop(){
  
  fadeInSeqence();
  delay(1500);
  colorChangingMode();
  delay(1500);
}

// Selfexplainatory I think :)
void colorChangingMode(){
  fadeUpGreen();
  fadeUpRed();
  fadeDownGreen();
  fadeUpBlue();
  fadeUpGreen();
  fadeDownRed();
  fadeDownBlue();
  fadeDownGreen();
}

// fades all the colors one after the other
void fadeInSeqence(){
  fadeUpRed();
  fadeDownRed();
  fadeUpGreen();
  fadeDownGreen();
  fadeUpBlue();
  fadeDownBlue();
}

// Fade functions
void fadeUpRed(){
  for (int i = 0; i <= 255; i++){
    analogWrite(redLED, i);
    delay(10);
  }
}
void fadeDownRed(){
  for (int i = 255; i >= 0; i--){
    analogWrite(redLED, i);
    delay(10);
  }
}
void fadeUpGreen(){
  for (int i = 0; i <= 255; i++){
    analogWrite(greenLED, i);
    delay(10);
  }
}
void fadeDownGreen(){
  for (int i = 255; i >= 0; i--){
    analogWrite(greenLED, i);
    delay(10);
  }
}
void fadeUpBlue(){
  for (int i = 0; i <= 255; i++){
    analogWrite(blueLED, i);
    delay(10);
  }
}
void fadeDownBlue(){
  for (int i = 255; i >= 0; i--){
    analogWrite(blueLED, i);
    delay(10);
  }
}

/* turns the specified LED ON
 *  1 - RED
 *  2 - GREEN
 *  3 - BLUE
 */
int turnOn(int led){
  switch(led){
  case 1:
    digitalWrite(redLED, HIGH);
    break;
  case 2:
    digitalWrite(greenLED, HIGH);
    break;
  case 3:
    digitalWrite(blueLED, HIGH);
    break;
  }
}

/* turns the specified LED OFF
 *  1 - RED
 *  2 - GREEN
 *  3 - BLUE
 */
int turnOff(int led){
  switch(led){
  case 1:
    digitalWrite(redLED, LOW);
    break;
  case 2:
    digitalWrite(greenLED, LOW);
    break;
  case 3:
    digitalWrite(blueLED, LOW);
    break;
  }
}

// turns the specified LED ON
void turnOnRed(){
  digitalWrite(redLED, HIGH);
}
void turnOnGreen(){
  digitalWrite(greenLED, HIGH);
}
void turnOnBlue(){
  digitalWrite(blueLED, HIGH);
}

// only turns the spesified LED OFF
void turnOffRed(){
  digitalWrite(redLED, LOW);
}
void turnOffGreen(){
  digitalWrite(greenLED, LOW);
}
void turnOffBlue(){
  digitalWrite(blueLED, LOW);
}




