#include "DriveLeft.h"
#include "../Subsystems/Chassis.h"

DriveLeft::DriveLeft()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::chassis);
}

// Called just before this Command runs the first time
void DriveLeft::Initialize()
{
	printf("DriveLeft::Initialize()\n");

}

// Called repeatedly when this Command is scheduled to run
void DriveLeft::Execute()
{
	Robot::chassis->MecanumDrive_Cartesian(0.3, 0, 0);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveLeft::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveLeft::End()
{
	printf("DriveLeft::End()\n");
	Robot::chassis->MecanumDrive_Cartesian(0, 0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveLeft::Interrupted()
{
	printf("DriveLeft::Interrupted()\n");
	Robot::chassis->MecanumDrive_Cartesian(0, 0, 0);
}
