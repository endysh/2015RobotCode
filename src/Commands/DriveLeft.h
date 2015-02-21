#ifndef DriveLeft_H
#define DriveLeft_H

#include "../Robot.h"
#include "WPILib.h"

class DriveLeft: public Command
{
public:
	DriveLeft();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
