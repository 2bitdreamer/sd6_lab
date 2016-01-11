#define WIN32_LEAN_AND_MEAN
#include <windows.h>

//-----------------------------------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE applicationInstanceHandle, HINSTANCE, LPSTR commandLineString, int)
{
	MessageBox(NULL, "Hi",
		"TestBox", MB_OK | MB_ICONEXCLAMATION);
	return 0;
}
