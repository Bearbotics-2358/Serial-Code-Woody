#include "Woodie.h"
#include "Prefs.h"
#include "WPILib.h"
#include <SerialPort.h>
#include "Tank.h"

Woodie::Woodie(void):
		a_Joystick(JOYSTICK_PORT),
		a_Joystick2(JOYSTICKTWO_PORT),
		a_PDP(PDP_PORT),
		a_Arduino(BAUD_RATE, 0, DATA_BITS, 0, 10),
		a_Left(L_DRIVE),
	    a_Right(R_DRIVE),
        a_Tank(a_Left, a_Right)
{

}

void Woodie::RobotInit()
{
	a_Tank.Init();
	a_Arduino.Reset();
}

void Woodie::DisabledInit()
{
	a_Tank.Disable();
}

void Woodie::AutonomousInit()
{

}

void Woodie::AutonomousPeriodic()
{

}

void Woodie::TeleopInit()
{
	a_Tank.Enable();
}

void Woodie::TeleopPeriodic()
{
	a_Tank.Update(a_Joystick, a_Joystick2);
	a_Arduino.Write("B",1);
}

void Woodie::TestInit()
{

}

void Woodie::TestPeriodic()
{

}

START_ROBOT_CLASS(Woodie);

