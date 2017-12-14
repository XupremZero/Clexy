#include <Clexy\Core\Debug.h>
#include <Clexy\Config.h>
#include <Clexy\Core\File.h>
#include <Clexy\Core\Process.h>

Void Clexy::Log(const Severity sev, const Byte* msg, const Bit Continue)
{
	File* f = new File(LogFile);
	switch (sev)
	{
	case Severity::Info:
		f->Write("Info: ");
		f->Write(msg);
		f->Write("\n");
		break;
	case Severity::Warn:
		f->Write("Warn: ");
		f->Write(msg);
		if (Continue)
			f->Write("Decided to continue.");
		f->Write("Decided to exit.");
		f->Write("\n");
		Exit();
		break;
	case Severity::Error:
		f->Write("Error: ");
		f->Write(msg);
		f->Write("Exiting the program.");
		f->Write("\n");
		Abort();
	}
}