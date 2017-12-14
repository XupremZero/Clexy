#pragma once
#include <Clexy\Types.h>

ns Clexy
{
	//Check if battery is charging.
	Bit IsCharging();

	//Get battery percentage, if any.
	UByte GetBatteryLevel();
}