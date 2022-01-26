#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <thread>
#include <Windows.h>
#include <filesystem>

using std::thread;

void HideConsole()
{
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}


int main()
{

	HideConsole();
	int result = 0;
	std::string comm = "C:\\Users\\user\\Desktop\\highCPU\\Debug\\runner.exe";

	//char command[] = "C:\\Users\\user\\Desktop\\highCPU\\Debug\\runner.exe"; // TODO deal with path, maby self compile

	//char newname1[] = "bro*o.exe";
	//char newname2[] = "bruhh*h.exe";
	//char newname3[] = "illtryitlate*r.exe";
	//char newname4[] = "shaksuk*a.exe";

	//char oldname[] = "name.exe";
	//char newname[] = "othername.exe";

	//if (rename(oldname, newname) != 0)
	//	perror("Error renaming file");
	//else
	//	std::cout << "File renamed successfully";

	while (true)
	{
		result = system(comm.c_str());
	}

	return 0;
}