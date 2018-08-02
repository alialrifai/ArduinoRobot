#include <Servo.h>
//////////////////////////////////////////////////////
/////Definitions and Constants///////////////////////
/////////////////////////////////////////////////////
float angle = 0;
int counter;
const int distance = 100;
const int delayTime = 2000;
const int day = 400; //threshold dayligh value
int surrlight = 0; //The variable holding the analog reading of surrounding light (analog pin A1)
const int buzzerPin = 8;//buzzer Pin is 9
const int bumperRight = 2; // Digital Pin 2 Right bumper
const int bumperLeft = 3;  // Digital Pin 3 Left bumper
int microswitchLeft = 0;          // Variable for left bump micro-switch
int microswitchRight = 0;         // Variable for left bump micro-switch
Servo servoLeft;         // Defines left servo
Servo servoRight;        // Defines right servo
Servo servoScan;       // Defines ultrasonic scanner servo
//ultrasonic sensor
const int pingPin = 7;       // ultrasonic sensor connected to Digital 7
unsigned int duration, inches, cm, i_counter, RightTurnDealy, LeftTurnDealy, forwardDelay;
///////////////////////////////////////////////////////////////////////////////////////////////
///Void Setup/////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);

  servoLeft.attach(9);   // setting-up Left servo to pin D9
  servoRight.attach(10); // setting-up Right servo to pin D10
  servoScan.attach(4); // setting-up Scanning servo to pin D4
  // Set pin modes
  pinMode(bumperLeft, INPUT);
  pinMode(bumperRight, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////// Loop  //////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

void loop() {
  surrlight = analogRead(A1);
  if (surrlight < day) {
    stopRobot(); ////// Robot stops at night
  }

  do { // Start forward Test bumper switches
    //if (sonarRead()>distance){stopRobot();delay(100);reverse();delay(500);turnRight();delay(500);}

    forward();

    microswitchLeft = digitalRead(bumperLeft);
    microswitchRight = digitalRead(bumperRight);

    // If left bumper hit
    if (microswitchLeft == HIGH) {
      microSwitchL();
    }
    // If right bumper hit
    if (microswitchRight == HIGH) {
      microSwitchR();
    }
    Serial.print("Counter: = ");
    //prints time since program started
    Serial.println(counter);
    counter = counter + 10;
    delay (100);
  }
  while (counter < 400);
  counter = 0;
  turretStep(30, 180, 1000);
  goCenter();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////
// Motion Routines/////////////////////////
///////////////////////////////////////////
void microSwitchR()
{ reverse();
  delay(300);
  turnRight();
  delay(150);
}

///////////////////////////////////////
void microSwitchL() {
  reverse();
  delay(250);
  turnLeft();
  delay(150);
}
//////////////////////
void forward() {
  servoLeft.write(0);
  servoRight.write(180);

}
/////////////////////////////////
void reverse() {
  servoLeft.write(180);
  servoRight.write(0);
}
///////////////////////////////////
void turnRight() {
  servoRight.write(180);
  servoLeft.write(180);

}
/////////////////////////////////
void turnLeft() {
  servoLeft.write(0);
  servoRight.write(0);
}
////////////////////////////////////
void stopRobot() {
  servoLeft.write(90); servoRight.write(90);
  //tone(buzzerPin,800);delay(200);noTone(buzzerPin);delay(200);
}
////////////////////////////////////
void scanLeft() {
  servoScan.write(180);
  delay(delayTime);
}
////////////////////////////////////
void scanRight() {
  servoScan.write(0);
  delay(delayTime);
}
//////////////////////////////////////
void goCenter() {
  servoScan.write(90);
  // delay(delayTime);
}
////Scanning Steps Routine//////////
///////////////////////////////////////
void turretStep(int minVal, int maxVal, int stepDelay) {
  //stopRobot();
  for (int i = minVal; i <= maxVal; i += 6) {

    Serial.print("i = "); Serial.println(i / 6, DEC);
    servoScan.write(i);
    delay(stepDelay);
    /////////////
    //Task if the sonar detected an Object within 20 inches or less
    ////////

    pinMode(pingPin, OUTPUT);          // Set pin to OUTPUT
    digitalWrite(pingPin, LOW);        // Ensure pin is low
    delayMicroseconds(2);
    digitalWrite(pingPin, HIGH);       // Start ranging
    delayMicroseconds(5);              //   with 5 microsecond burst
    digitalWrite(pingPin, LOW);        // End ranging
    pinMode(pingPin, INPUT);           // Set pin to INPUT
    duration = pulseIn(pingPin, HIGH); // Read echo pulse
    inches = duration / 74 / 2;        // Convert to inches
    cm = duration / 29 / 2;            // Convert to centimeters
    int sonarRead = inches;

    //Serial.println(sonarRead, DEC);  // Show in Serial Monitor		     // Return inches (or cm)
    //delay(100);

    if (sonarRead > 7 && sonarRead < 50) {
      /*this if step checks and make sure the sonar read is not equal to 4 or 3
        which is two value caused by my faulty Sonar/////Refere to troble shooting page in the report for more details*/
      stopRobot();
      i_counter = i / 6; // this step count the number of steps
      RightTurnDealy = (15 - i_counter) * 95;
      LeftTurnDealy = (30 - i_counter) * 100;
      forwardDelay = sonarRead * 68;
      switch (i_counter) {

        case 5:
          turnRight();
          delay( RightTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 6:
          turnRight();
          delay( RightTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 7:
          turnRight();
          delay( RightTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 8:
          turnRight();
          delay( RightTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 9:
          turnRight();
          delay( RightTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 10:
          turnRight();
          delay(RightTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 11:
          turnRight();
          delay(RightTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 12:
          turnRight();
          delay(RightTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 13:
          turnRight();
          delay(RightTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 14:

          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 15:

          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 16:

          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 17:

          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 18:

          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 19:

          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 20:

          forward();
          delay(forwardDelay);
          stopRobot();
          break;


        case 21:
          turnLeft();
          delay(LeftTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 22:
          turnLeft();
          delay(LeftTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 23:
          turnLeft();
          delay(LeftTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 24:
          turnLeft();
          delay(LeftTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 25:
          turnLeft();
          delay(LeftTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 26:
          turnLeft();
          delay(LeftTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 27:
          turnLeft();
          delay(LeftTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 28:
          turnLeft();
          delay(LeftTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 29:
          turnLeft();
          delay(LeftTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;

        case 30:
          turnLeft();
          delay(LeftTurnDealy);
          forward();
          delay(forwardDelay);
          stopRobot();
          break;



      }
      // delay(100);
      //  delay(100);
      Serial.print("Sonar Reading = "); Serial.println(sonarRead, DEC);
      // Show in Serial Monitor
    }
    else {
      Serial.print("Sonar Reading = "); Serial.println(sonarRead, DEC);
      stopRobot();
      //delay(1000)
    }
  }
}



///////////////////////////////////////////////////

