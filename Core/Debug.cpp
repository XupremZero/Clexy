//Copyright 2018 Samuel Alonso, All Rights Reserved
#include <Clexy\Core\Debug.h>
#include <stdio.h>

#ifdef ClexyDebug
Void Log(const Severity s, const Byte* msg)
{
	FILE* fff = fopen("C:\\Clexy\\Logger", "w");
	switch (s)
	{
	case Severity::Info:
		Byte* imsg = "Info: ";
		fwrite(imsg, 1, 6, fff);
		fwrite(msg, 1, 200, fff);
		fwrite("\n", 1, 1, fff);
		break;
	case Severity::Warn:
		Byte * wmsg = "Warn: ";
		fwrite(wmsg, 1, 6, fff);
		fwrite(msg, 1, 200, fff);
		fwrite("\n", 1, 1, fff);
		break;
	case Severity::Error:
		Byte * emsg = "Error: ";
		fwrite(emsg, 1, 7, fff);
		fwrite(msg, 1, 200, fff);
		fwrite("\n", 1, 1, fff);
	}
	fclose(fff);
}
#endif