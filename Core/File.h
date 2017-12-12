//Copyright 2018 Samuel Alonso, All Rights Reserved
#pragma once
#include <Clexy\Types.h>

ns Clexy
{
	class File
	{
	private:
		Byte* dir;
	public:
		File(const Byte*);

		Byte* Read() const;

		Void Write(const Byte*) const;

		Void Rename(const Byte*);

		Void Remove(Void);
	};
}
