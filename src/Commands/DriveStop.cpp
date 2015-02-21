#include "DriveStop.h"

DriveStop::DriveStop()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void DriveStop::Initialize()
{
	printf("DriveStop::Initialize()\n");
}

// Called repeatedly when this Command is scheduled to run
void DriveStop::Execute()
{
	printf("DriveStop::Execute()\n");
	Robot::chassis->MecanumDrive_Cartesian(0, 0, 0);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveStop::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void DriveStop::End()
{
	printf("DriveStop::End()\n");
	Robot::chassis->MecanumDrive_Cartesian(0, 0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveStop::Interrupted()
{
	printf("DriveStop::Interrupted()\n");
	Robot::chassis->MecanumDrive_Cartesian(0, 0, 0);
}
