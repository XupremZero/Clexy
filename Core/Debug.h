//Copyright 2018 Samuel Alonso, All Rights Reserved
#pragma once

enum Severity : unsigned char
{
	Info, Warn, Error
};

#ifdef ClexyDebug
#include <Clexy\Types.h>
Void Log(const Severity, const Byte*);
#else
#define Log(x, y, z)
#endif