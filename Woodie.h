/*
 * Woodie.h
 *
 *  Created on: Mar 12, 2016
 *      Author: tester
 */

#include "WPILib.h"
#include "Prefs.h"
#include <SerialPort.h>
#include "Tank.h"

#ifndef SRC_WOODIE_H_
#define SRC_WOODIE_H_

class Woodie : public IterativeRobot {
public: Woodie(void);
		void RobotInit(void);
		void DisabledInit(void);
		void TeleopInit(void);
		void TeleopPeriodic(void);
		void TestInit(void);
		void TestPeriodic(void);
		void AutonomousInit(void);
		void AutonomousPeriodicFull(void);
		void AutonomousPeriodic(void);
		void AutonomousPeriodicSimple(void);
private:
	Joystick a_Joystick;
	Joystick a_Joystick2;

	PowerDistributionPanel a_PDP;

	SerialPort a_Arduino;

	Talon a_Left;
	Talon a_Right;

	Tank a_Tank;
};

#endif /* SRC_WOODIE_H_ */
