
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	drive.enable = 1;
}

void _CYCLIC ProgramCyclic(void)
{
	DoorStateMashine(&door);
	
	drive.speed = door.speed;
	DriveStateMashine(&drive);
	
	led.state = door.state;
	LedStateMashine(&led);
	led.timer++;
}

void _EXIT ProgramExit(void)
{
	
}

