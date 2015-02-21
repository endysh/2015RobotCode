#ifndef DriveStop_H
#define DriveStop_H

#include "../Robot.h"
#include "WPILib.h"

class DriveStop: public Command
{
public:
	DriveStop();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
