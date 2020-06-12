#include <Windows.h>
#include <iostream>

int main()
{
	//Send hwnd broadcast to all top level windows with hwnd broadcast and use SC_MONITORPOWER to set monitor state to 2 which is off
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
	//Sleep for 5 seconds to allow for time before monitor comes back on
	Sleep(5000);
	//Use same method to turn the monitor state back on (-1)
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);
	//since main needs a return integer, we return 0 to end the program
	return 0;
}