//Copyright 2018 Samuel Alonso, All Rights Reserved
#include <Clexy\Core\Exception.h>
#include <stdio.h>
#include <stdlib.h>

Void Clexy::Launch(const char* msg)
{
	FILE* fff = fopen("C:\\Clexy\\Logger", "w");
	fwrite(msg, 1, 300, fff);
	fwrite("\n", 1, 1, fff);
	fclose(fff);
	abort();
}