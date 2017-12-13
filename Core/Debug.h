//Copyright 2018 Samuel Alonso, All Rights Reserved
#pragma once

enum Severity : unsigned char
{
	Info, Warn, Error
};

#ifdef ClexyDebug
#include <Clexy\Types.h>
/*Write a debug message based on the second argument. If Severity level is equal to Info the program will continue executing,
if it's equal to Warn, the program will continue to execute or not depending if the third argument is true or false(true to continue, false to exit).
Finally if the Severity level is equal to Error, the program will abort the process.*/
Void Log(const Severity, const Word, const Bit);
#else
#define Log(x, y, z)
#endif