
# Smart-Irrigation-Robot

This project is all about the automatic irrigation system, This robot will start moving and then stop whenever it will find any plant then it starts watering according to their need.


## context

 - [introdution](https://awesomeopensource.com/project/elangosundar/awesome-README-templates)
 - [circuit diagram](https://github.com/matiassingers/awesome-readme)
 - [software setup](https://bulldogjob.com/news/449-how-to-write-a-good-readme-for-your-github-project)


## circuit diagram
The circuit diagram of the automatic plant watering system is shown in Fig. 2. The circuit comprises an Arduino UNO board, a soil moisture sensor, a servo motor, DC water pump, and an L293D (IC1) motor driver IC,ultrasonic sensor,moiture sensor, li on battery,TP4056 charging module, 100RPM geared motor,wheels.

![image](https://user-images.githubusercontent.com/115499393/222493284-b0f1a01e-a7d5-4138-bf2d-e1240b05b9f5.jpg)

## Software Setup 
The program is written in Arduino programming language. The code is well-commented and easy to understand. Compile the irrigation robot.ino code and upload it to the microcontroller, using Arduino IDE version 1.

Once the arduino is loaded with the program it's time to wire it all up. Follow the diagram and wire everything up accordingly. Do not plug the arduino in to power at this point. Make sure everything is situated before letting it loose on your plants. You will need to attach a hose to the pump which will deliver water to your plants. I used a fish air hose to do this.

The sensor will calibrate by itself once it is kept in the soil and the threshold value will be shown on the serial monitor in Arduino. Serial debugging is available in this program.

The program in the Arduino reads the moisture value from the sensor every 20 seconds. If the value reaches the threshold value, the program does the following three things:
*It moves the servo motor , along with the water pipe fixed on it, toward the potted plant, whose moisture level is less than the predetermined/ threshold level.

*It starts the motor pump to supply water to the plant for a fixed period of time and then stops the water pump.


*It brings back the servo motor to its initial position.

## GUIDELINES:

Before powering the circuit on, you need to keep in mind the following macro definitions in the code:

*Changing the angle of rotation of the servo horn toward the first plant and second plant. The default values are 70 degrees and 145 degrees.

*Changing the watering time according to the size of the plant. The default values are five seconds and eight seconds.

*Changing the threshold value according to your need. The default value is 600.

Place the flower plants where the pipe from the servo motor can easily reach them. When the moisture level dips below 600, the servo  rotates at an angle of 70 degrees. That is after the servo motor horn moves 70 degrees toward the first pot, the motor pump will be on for five seconds and then stop automatically. Then, the servo returns to its original position. Similarly, if you are using a second sensor, the servo motor horn will move to 145 degrees to the second biggest pot, and the motor pump will be on for eight seconds and then stop automatically. The servo returns to its original position.

The water pipe is connected to the servo motor which rotates according to the requirement.

*If there are two crops A & B. and if A has less amount of moisture then the servo motor rotates toward crop A.

*Starts the watering and when it will fill up it will rotate towards PLANT B. this is one more benefit of this project.

## Set up yours
To reproduce this project, you'll need some tools, some material, and the code from this project
## Code
Upload the attached sketch to your arduino. It measures the level of humidity in the soil surrounding your plants. If that level drops below a specified threshold it turns on the water pump delivering just the right amount of water while you're on vacation.
Once the arduino is loaded with the program it's time to wire it all up. Follow the diagram and wire everything up accordingly. Do not plug the arduino in to power at this point. Make sure everything is situated before letting it loose on your plants. You will need to attach a hose to the pump which will deliver water to your plants. I used a fish air hose to do this.
I situated a bucket of water and a shelf (for all of the electronics) close to the actual plant. The hygrometer needs to be placed into the soil and the pump needs to be submersed in water before plugging in the Arduino. If you haven't plugged in the pump go ahead and do so. Finally connect the arduino to your chosen power source. I'm using a simple 5V charger and a USB cable.

## Tools
The tools are very simple, I used for this project:

*Battery holders

*mounting
* A flat screwdriver 

*Plastic rod

If you have them you can also add some wire strippers, but they are not indispensable.

## Material
Here is a list of the products used to build the system.
**To control the system:**

*Arduino UNO (2100 pkr)

* Servo SG90(640)
* L293D Sheild(500pkr)
* 100 RPM Geared motor and wheels(880pkr)
* Prototyping jumper wires(140pkr)
* Wooden box
* Plastic container

**For the autonomy in energy:**

*LI_ON Battery(280pkr)

*Charging module(TP4056)(120pkr)

**For the water tank:**

*12V DC pump(350pkr)

**The sensors:**

* Ultrasonic sensor(380pkr)

*Moisture sensor(180pkr)


For a total of 10k. That's not cheap! But keep in mind that it's still cheaper than a pre-built system, and with a lot more capabilities! Also, some parts are only for prototyping, and we purchased many components in groups of several pieces for other projects, you don't need 3 NodeMCU boards, nor 6 relays for this project

** Power Block**
 The L293D Sheild  can drive 4 DC motors and 2 stepper or Servo motors at the same time. Each channel of this module has the maximum current of 1.2A and doesn't work if the voltage is more than 25v or less than 4.5v.the supply voltage and reduces it to a constant 5V making it suitable to run the Arduino & Soil Moisture Sensor.

** Moisture Sensor**
The sensor feeds an analog value to the Arduino. The threshold level of moisture is calibrated by the user depending on the type of plant used.
