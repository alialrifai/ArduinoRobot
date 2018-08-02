# ArduinoRobot


Introduction:
Humans were always fascinated by inanimate objects that can move like living beings calling them possessed or mystic. In fact puppeteers had made a career of this fascination hundreds of years ago manipulating string-puppets to create the illusion of life to entertain their audience (Dircks 58). I believe that puppeteers were the inspiration behind the creation of robots and were the first programmers who wrote sets of tasks for their puppets to perform. However, the tools and hardware has greatly evolved. With the magic of electronics, the strings disappeared making puppets a lot more convincing, useful, and lifelike. Nowadays, these puppets are called robots carrying vital roles in our lives like manufacturing commodities, defusing bombs, and exploring the cosmos. Modern electronic made possible the building of autonomous robotics that can think for themselves and magically navigate complicated terrains. With the use of Modern microcontrollers, a creation emerged from semiconductor technologies, we have been able to build robots easier and cheaper. 
There is an extensive line of affordable and widely available microcontrollers similar to Parallax Basic Stamp, MIT's Handyboard, Phidgets, Netmedia's BX-24, and many others. However, one of the least expensive and widely available microcontrollers are the Arduinos. The Arduino microcontrollers dates back to 2005 when teachers and students of an Italian engineering school devised a low-cost alternative to the more expensive microcontrollers available for robotics enthusiastic (Wheat 2). Arduinos can control the physical world with an open-source physical computing platform and C++ programing environment (“Arduino”). An Arduino can be utilized to develop interactive projects, taking inputs from a variety of switches and sensors, and controlling a variety of DC motors, lights, servos, LEDs, monitors, and produce many other physical outputs. Let’s dive in the world of Arduinos and discover what the marvelous capabilities of this microcontroller with my LEERoverBOT1. 

Why an Arduino Honors Project?
My first interaction with robotics was at Lee College in Baytown Texas Intro to Engineering class with Dr. Evans Richards. The course provided an entry level to programing and extensive training in robotics principle using the LEGO Mindstorms hardware, NXT smart brick, and software, see figure 1. During that course, I discovered that there are many other microcontroller platforms available for physical computing for a lot cheaper and with wider engineering design expansion venue. Many of these controllers are cross-platform software that runs on Windows, Macintosh OSX, and Linux operating systems. One of these controllers was the Arduino Uno that has a simple, clear programming environment with a software that is published as open source tools using the c++ libraries (“Arduino”). The great feature that make Arduino very appealing to me was that I can be used to write and upload the programs on computers without administration rights by simply download the drivers, libraries, and IDE (integrated development environment) for the non-administrative user. In addition, it has an open source and extensible hardware which is based on Atmel's ATMEGA8 and ATMEGA168 integrated circuits. Finally, “the plans for the modules are published under a Creative Commons license, so experienced circuit designers” can make their own microcontrollers modules using these blue prints. All that made the Arduino affordable, easy to work with, and give me true hands-on working experience with an engineering robotics honors project. Therefore, I chose the Arduino. 
Development and Software
	This honors project went through the normal growth and development steps of any research project were I had to change some parts, add new features, and/or modifying my robot features and functions. Many of my changes were mandated by financial cost or inspired by hands-on work and troubleshooting. The software that I used in this project is the open-source Arduino, a Java environment IDE (integrated development environment), installed on Windows 8.1 OS. However, Arduino language is based on the standard open-source C/C++ functions, libraries, and compilers which made my programing tasks and work easier because of my background the classes that I took in C++ programing in two previous classes at Lee College Physics, Math, and Engineering department.  

Hardware Components:
1.	Arduino Uno USB Microcontroller Rev 3:
After two months of research, I decided to go with the Arduino Uno because it has an extensive history of approval by many engineers and educators, in addition, it was one of the most used controllers around the world for robotics projects in multiple levels of complexity. The Arduino Uno Rev3, see figure 2, is a microcontroller board based on the ATmega328. The Uno has 14 digital input/output pins, 6 analog inputs, a 16 MHz ceramic resonator, a USB connection, a power jack, and a reset button. It contains everything needed to support my LEERoverBOT1® (Banzi 21). The microcontroller; simply connect it to a computer with a USB, and the drivers will be automatically installed for Windows 8.1. One can also use a power source from an AC-to-DC adapter or 9 volts alkaline battery to get started. 

 
Figure 3: 4-AA Batteries holder with On/Off Switch & 9 Volts Alkaline Battery
Source: http://www.pololu.com/product/1159

2.	Power Supply:
I have used a standard 9 volts alkaline batteries to supply my Arduino Uno with power and four AA-batteries and a holder with on/off switch to supply my sensors and servo motors, see figure 3. The separate power source for the microcontroller and the sensors eliminate the need for additional motor or servo shield required to run an Arduino sensors. If one tried to run a more that one servo motor and/or many sensors out of the Arduino 5 volts power source and ground, he/she might have issues with servos working erratically and might run into the danger of drawing too much electrical current which might destroy the microcontroller. 

3.	Ultrasonic Sensor:
Parallax’s ultrasonic sensor provides a very low-cost and easy method of distance measurement between moving or stationary objects. This ultrasonic distance sensor is widely used in robotics applications, see figure 4. Using sonar; an ultrasonic wave that is above human hearing to transmit from the unit to determine by measuring the time required for the echo return.
 
Figure 5: Standard Micro-Switch. 
Source: http://www.pololu.com/product/1403

4.	Micro-switches:
This single-pole, double-throw (SPDT) with the long lever arm makes it especially useful as a tactile bump sensor, see figure 5. The switch body dimension is 20.0 x 6.4 x 10.2 mm, and the lever arm is 50 mm long. 

5.	Servo motors:
The Parallax Futaba S148 continuous rotation servo converts standard RC servo position pulses into continuous rotation, see figure 6. The servo includes an adjustable potentiometer that can be used to center the servo. It can be controlled directly by a microcontroller without any additional electronics. 
It is significant to note here that servo motors have short lives comparing to DC motor, and the modification to continuous movement will exacerbate this problem (Wang 376). However, the biggest advantage of servo motors over DC motors is that one can move them to a specific location by specifying the degree of rotation in C++. The modified servo motors, however, will stop when requesting a 90 degrees movement and move in different directions when giving them 180 or 0 degrees. 


SPECS:	
•	POWER: 4.8 – 6 V
•	TOP 6 V SPEED: 50 RPM (WITH NO LOAD)
•	TORQUE: 2.7 KG-CM/38 OZ-IN AT 6 V
•	WEIGHT: 43 G/1.5 OZ WITH SERVO HORN AND SCREW
•	SIZE (L X W X H): 40.5 MM X 20.0 MM X 38.0 MM / 1.60" X 0.8" X 1.50"



6.	Speaker: 
Sound is mechanical vibration results from a movement and transfer in a medium. In this case the medium is air and the movement is done by a small relay.  


 
7.	Ball Caster:
This light ball caster with a 1" diameter plastic ball. The height of the assembled kit ranges from 1.1" to 1.4", see figure 7. 
8.	
9.	 PVC sheets, screws, nuts, and plastic pipes, electronics overstock. 
10.	Breadboards, wires, and connectors.

Building LEERoverBOT1
I was able to get a mechanical construction of LEERoverBOT1 design form Pololu.com website. While the rest of the body screws were recycled from old toys and a bag of PVC sheet from an online distributor of new and surplus electronic and electromechanical components and supplies. 

Cutting and Making the Pieces:
•	The top and bottom decks measures about 8 inches in diameter. All holes were made during the building and adding of new components to the robot. Additional cutting for the power switch and holes were add as needed. 
•	Two servo mounts were had to go through some modification, they were too small. The modification was made by a small cutter since the PVC sheets are highly malleable and easy to cut by any medium size cutter. 
Assembly: 
•	My robot has no rear or front (that was true up to the point before adding the micro-switches and ultrasonic sensor), therefore, I was free with assembling my robot with four 3.5 inch screws and aquarium air tubes to create the two decks, see Figure 8.

•	Attaching the Arduino Uno Rev3 to the second Deck with the two solderless breadboards with heavy duty mounting tape (a specially designed tape that sticks from both sides to mount plastic hangers), as shown in figure 9. I tried to mount them in the middle for asthetic and wieght balance reason as white distribution will greately affect steering of the robot.



Figure 9: Arduino and Breadboards Mounted on Second Deck

•	Adding power switch was the last step in my assemply steps. I did that by simply cutting in the first deck with an industrial midium size blade cutter then power switch has a spring like edge that snaps in place.


  
Wiring Up and Testing
To run one servo all what is needed is one a program required and proper wiring. The modified for continuous servo motor has three wires: red (for power), white (for signal), and black (for ground). Using wires, preferably same colors as the main colors going to the servo, one can connect safely a signle servo without over tasking the Arduino Uno and drowing too much current. First, one need to connectthe 5 volts for the power and the ground of the servo to the power and gournd of the Arduino. Then the middle white wire can be connected to the digital pin 8 which is one of the 14 digital output/input pins. 




 
Figure 10: Electrical Diagram Single Servo.

Programing the Servo:
After opening the Arduino IDE program, the programmer need to do the following steps:
1.	Including the servo library, this step will provide additional features to the Arduino. Servos library are not preinstalled and including a lot of library will reduce the limited amount of flash memroy available in the Arudino Uno. The total amount of memory is 32 kilo bytes:

#include <Servo.h>
2.	Creating a name for the servo:
Myfirstservo;
3.	Setting up the servo (Myfirstservo) and assigning pin 8 to it. 
void setup ( ) {
Myfirstservo.attach (9);
}
4.	Creating a loop to accoumplish a task:
void loop ( ) { 
Myfirstservo.write(0);
delay (2000);
Myfirstservo.write(180);
delay(2000);
}
This program should make the servo trun in one direction for 2 seconds and in the other direction for another 2 seconds. It is greate to note here that the program understand delay in microseconds; therefore, 2 seconds is equal to 2000 microseconds in the Arduino IDE. 
Note:  When writing zero to the servo that will create a movement in one direction while writing 180 will cause the servo move in the other diection. Writing zero will cause the servo to stop.


Troubleshooting
This is a list of some problems that I find and the remedies and or change in design that I find to solve them. 
1.	The LEERoverBOT1 had a problem with servos going one way only. The program was writing correctely, and the servo was connected proberly. After researching for over two weeks, I finally find out that the since LEERoverBOT1 is powered buy two separate power sources, 9 volts for the Arduino and 4.8 volts for the servos and the other componnents (Platt 56). I must have the ground connections connected together to fix this control issue. 
2.	The servos does not go to a full stop with receiving 90 degrees input. This problem was resolved by calibrating the servos to stop when sending a 90-write output. Each of the servos comes with a potentiameter. Using size 0 philips screw driver to calibrate the servos while receving a 90-degrees input by turing it clockwise or coutnerclockwise to accoumplish a full stop. 
3.	The analog imput is receiving a digital 1, or about 5 volts, when connected to the ground of the circuit. It is a design must to have what is called a pulldown resistor to bring the voltage to zero and accomplish a zero imput, see figure 11 (Platt 153). The pulldown resistor will pring the voltage to zero. I used a 10K ohms resistor to accomplish this task.



Programing 
Summary 
 
Works Cited
"Arduino - Introduction." Arduino - Introduction. N.p., n.d. Web. 15 Nov. 2014.
Banzi, Massimo. Getting Started with Arduino. Beijing: Make: / O'Reilly, 2011. Print.
"Designing a Robot Chassis." MAKE. N.p., n.d. Web. 16 Nov. 2014. <http://makezine.com/projects/designing-a-robot-chassis/>.
Dircks, Phyllis T. American Puppetry: Collections, History, and Performance. Jefferson, NC: McFarland, 2004. Print.
Platt, Charles. Encyclopedia of Electronic Components Volume 1 Resistors, Capacitors, Inductors, Switches, Encoders, Relays, Transistors. Sebastopol, CA: O'Reilly & Associates, 2012. Print.
Wang, Lihui, and Jeff Xi. Smart Devices and Machines for Advanced Manufacturing. London: Springer, 2008. Print.
"WHAT IS ARDUINO?" Arduino. N.p., n.d. Web. 23 Oct. 2014. <http://www.arduino.cc/>.
Wheat, Dale. Arduino Internals. United States: Apress, 2011. Print. 
 




