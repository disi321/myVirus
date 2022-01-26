#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <thread>
#include <Windows.h>

using std::thread;

void HideConsole()
{
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}

void ShowConsole()
{
	::ShowWindow(::GetConsoleWindow(), SW_SHOW);
}

bool IsConsoleVisible()
{
	return ::IsWindowVisible(::GetConsoleWindow()) != FALSE;
}

void justRun()
{
	while (true)
	{

	}
}


int main()
{
	HideConsole();

	std::thread t1(justRun);
	t1.detach();
	std::thread t2(justRun);
	t2.detach();
	std::thread t3(justRun);
	t3.detach();
	std::thread t4(justRun);
	t4.detach();
	std::thread t5(justRun);
	t5.detach();
	std::thread t6(justRun);
	t6.join();

	return 0;
}