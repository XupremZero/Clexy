//Copyright 2018 Samuel Alonso, All Rights Reserved
#include <Clexy\Core\Exception.h>
#include <stdio.h>
#include <stdlib.h>

Void Clexy::Launch(const Severity s, const char* msg)
{
	FILE* fff = fopen(LogPath, "w");
	fwrite(msg, 1, 300, fff);
	fclose(fff);
	exit(0);
}
