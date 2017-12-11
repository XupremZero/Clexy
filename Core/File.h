#pragma once
#include <Clexy\Types.h>

ns Clexy
{
	class File
	{
	private:
		char* dir;
	public:
		File(char*);

		Byte* Read();

		Void Write(const char*);

		Void Rename(char*);

		Void Remove();
	};
}