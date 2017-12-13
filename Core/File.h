#pragma once
#include <Clexy\Types.h>

ns Clexy
{
	class File
	{
	private:
		Byte* FilePath;
	public:
		//Save file path based on the argument. Create the file if it doesn't exist.
		File(const Byte*);

		//Read whole file and return its content.
		Byte* Read() const;

		//Write the content based on the argument, into the end of the file.
		Void Write(const Byte*) const;

		//Change file path based on the argument.
		Void Rename(const Byte*);

		//Delete file and set file path to nullptr.
		Void Remove();
	};
}