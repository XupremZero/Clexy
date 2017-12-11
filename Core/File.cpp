#include <Clexy\Core\File.h>
#include <stdio.h>

Clexy::File::File(char* Direction)
{
	dir = Direction;
	FILE* f = fopen(dir, "a+");
	fclose(f);
}

Byte* Clexy::File::Read()
{
	FILE* f = fopen(dir, "r");
	fseek(f, 0, SEEK_END);
	Int s = ftell(f);
	rewind(f);
	Byte* buffer;
	fread(buffer, 1, s, f);
	fclose(f);
	return buffer;
}

Void Clexy::File::Write(const char* Content)
{
	FILE* f = fopen(dir, "w");
	fwrite(Content, 1, sizeof(Content), f);
	fclose(f);
}

Void Clexy::File::Rename(char* NDirection)
{
	rename(dir, NDirection);
	dir = NDirection;
}

Void Clexy::File::Remove()
{
	remove(dir);
	dir = nullptr;
}