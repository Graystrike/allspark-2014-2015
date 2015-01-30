#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTServo)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     front_left,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     back_left,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     front_right,   tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     back_right,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     motorH,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     motorI,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C4_1,    servo1,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                           Autonomous Mode Code Template
//
// This file contains a template for simplified creation of an autonomous program for an TETRIX robot
// competition.
//
// You need to customize two functions with code unique to your specific robot.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                    initializeRobot
//
// Prior to the start of autonomous mode, you may want to perform some initialization on your robot.
// Things that might be performed during initialization include:
//   1. Move motors and servos to a preset position.
//   2. Some sensor types take a short while to reach stable values during which time it is best that
//      robot is not moving. For example, gyro sensor needs a few seconds to obtain the background
//      "bias" value.
//
// In many cases, you may not have to add any code to this function and it will remain "empty".
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

void initializeRobot()
{
	// Place code here to sinitialize servos to starting positions.
	// Sensors are automatically configured and setup by ROBOTC. They may need a brief time to stabilize.

	return;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                         Main Task
//
// The following is the main code for the autonomous robot operation. Customize as appropriate for
// your specific robot.
//
// The types of things you might do during the autonomous phase (for the 2008-9 FTC competition)
// are:
//
//   1. Have the robot follow a line on the game field until it reaches one of the puck storage
//      areas.
//   2. Load pucks into the robot from the storage bin.
//   3. Stop the robot and wait for autonomous phase to end.
//
// This simple template does nothing except play a periodic tone every few seconds.
//
// At the end of the autonomous period, the FMS will autonmatically abort (stop) execution of the program.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

task main()
{
	initializeRobot();

	waitForStart(); // Wait for the beginning of autonomous phase.

	motor[front_left]= -100; //drive forward
	motor[back_left]= -100;
	motor[front_right]= 100;
	motor[back_right]= 100;

	wait1Msec (1600);

	motor[front_left]= 100; //backs up
	motor[back_left]= 100;
	motor[front_right]= -100;
	motor[back_right]= -100;

	wait1Msec (500);

	 motor[front_left]= -100; //turns right
  motor[back_left]= -100;
  motor[front_right]= -100;
  motor[back_right]= -100;

  wait1Msec (100);

 motor[front_left]= -100; //drives forward
  motor[back_left]= -100;
  motor[front_right]= 100;
  motor[back_right]= 100;

  wait1Msec (800);

   motor[front_left]= 100; //drives backwards
  motor[back_left]= 100;
  motor[front_right]= -100;
  motor[back_right]= -100;

  wait1Msec (500);

   motor[front_left]= -100;//turns right
  motor[back_left]= -100;
  motor[front_right]= -100;
  motor[back_right]= -100;

  wait1Msec (250);

   motor[front_left]= -100;//inches forward
  motor[back_left]= -100;
  motor[front_right]= 100;
  motor[back_right]= 100;

  wait1Msec (500);

   motor[front_left]= 100;//turns Left
  motor[back_left]= 100;
  motor[front_right]= 100;
  motor[back_right]= 100;

  wait1Msec (350);

   motor[front_left]= -100; //drives forward
  motor[back_left]= -100;
  motor[front_right]= 100;
  motor[back_right]= 100;

  wait1Msec (700);

   motor[front_left]= 0;
  motor[back_left]= 0;
  motor[front_right]= 0;
  motor[back_right]= 0;

  wait1Msec (9999999999999);

	///////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////
	////                                                   ////
	////    Add your robot specific autonomous code here.  ////
	////                                                   ////
	///////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////

	while (true)
	{}
}
