#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <tchar.h>
#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <string>

DWORD mydrives = 100;// buffer length
char lpBuffer[100];// buffer for drive string storage

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
ifstream inFile;

int main(int argc, char** argv) {
	cout << "Booting";
	system("cd /Main/");
	string fileopen2;
	string fileopen3;
	fileopen2 == "/root/Main/";
	string path;
	Sleep(200);
	string password1;
	int x;
	string summ;
	system("CLS");
	cout << "Booting.";
	string pathh;
	pathh = " A:/Root/";
	Sleep(200);
	system("CLS");
	cout << "Booting..";
	Sleep(1127);
	cout << "Loading memory...";
	Sleep (2221);
	system("CLS");
	cout <<"Booting..Loading Memory...\n";
	cout << "|[]          |";
	Sleep(400);
	system("CLS");
	cout <<"Booting..Loading Memory...\n";
	cout << "|[][]        |";
	Sleep(510);
	system("CLS");
	cout <<"Booting..Loading Memory...\n";
	cout << "|[][][]      |";
	Sleep(520);
	system("CLS");
	cout <<"Booting..Loading Memory...\n";
	cout << "|[][][][]    |";
	Sleep(490);
	system("CLS");
	cout <<"Booting..Loading Memory...\n";
	cout << "|[][][][][]  |";
	Sleep(550);
	system("CLS");
	cout <<"Booting..Loading Memory...\n";
	cout << "|[][][][][][]|";
	Sleep(790);
	system("CLS");
	string fileopen;
	string input1;
	MEMORYSTATUSEX memInfo;
	memInfo.dwLength = sizeof(MEMORYSTATUSEX);
	GlobalMemoryStatusEx(&memInfo);
	DWORDLONG totalPhysMem = memInfo.ullTotalPhys;
	DWORDLONG totalVirtualMem = memInfo.ullTotalPageFile;
	totalVirtualMem = totalVirtualMem / 1024;
	totalVirtualMem = totalVirtualMem / 1024;
	totalVirtualMem = totalVirtualMem / 1024;
	totalPhysMem = totalPhysMem / 1024;
	int a, b, c, d, e, f, i;
	i = 0;
	c = 0;
	b = 0;
	label_0:
	Sleep(1000);
	totalPhysMem = totalPhysMem / 1024;
	label_1:
	system("CLS");
	label_2:
	system("color 8F");
	label_t:
	if (c == 5) {
		system("color 0f");
		cout << "Enter password for administrator: ";
		string password2;
		cin >> password2;
		if (password2 == password1) {
			system("color 8F");
			goto label_a;
			i = 0;
		}
		if (password2 != password1) {
			cout << "Wrong password\n";
			i = i + 1;
			goto label_t;
		}
		if (i == 3) {
			system("color c7");
			cout << "You entered wrong password 3 times!";
			return 0;
		}
		
	}
	label_a:
	cout << "-----------------------------------------------\n";
	cout << "VojaOS V. 1.5 Alpha. \n Copyright 2018 Vojislav Dabic \n All rights reserved \n";
	cout << " RAM MEMORY:" << totalPhysMem << " Megabytes\n";
	cout << " HARD DRIVE SPACE (Allocated for OS):" << totalVirtualMem << " Gigabytes\n";
	cout << " American Megatrends BIOS \n";
	cout << " Memory PWM Value is " << c << " of max 5\n";
	cout << " Memory PWM2 Value is " << b << " of max 51\n";
	cout << " Current dir is " << pathh << "\n";
	cout << " Report bugs at my github page! https://github.com/VojislavDabicKP/VojaOS\n";
	cout << " For help enter H, ? or Help.\n";
	cout << "-----------------------------------------------\n";
	label_3:
	cout << "user$root" << pathh << "/: ";
	cin >> input1;
	if (input1 == "makefile") {
		cout << "enter name (eg. filename.md). Enter x to go back: ";
		cin >> fileopen;
		if (ENOENT == errno){
			cout << "Directory does not exist!";
			Sleep(1000);
			goto label_3;
		}
		if (fileopen == "x" or fileopen == "X"){
			goto label_3;
		}
		ofstream myfile;
		myfile. open (fileopen.c_str());
		cout << "File name: " << fileopen << "\nSaved in /root/ \n";
		cout << "Done!\n";
		Sleep(700);
		goto label_3;
	}
	if (input1 == "H" or input1 == "h" or input1 == "help" or input1 == "Help" or input1 == "?"){
		cout << "--------------------------\n";
		cout << "H, h, help, ?: opens this menu\n";
		cout << "makefile: enter this to make a file. You will be asked for name and directory.\n";
		cout << "Enter run to run a script.\n";
		cout << "Enter password to add a password\n";
		cout << "Enter open to open a txt file. (soon)\n";
		cout << "crash: crash the system. [WARNING!!!]\n";
		cout << "Enter cls to clear the screen.\n";
		cout << "Enter RED, GRAY, BLACK, BLUE, or WHITE to change themes\n";
		cout << "Enter specs or specifications to see your PC specs.\n";
		cout << "Enter logout to log out if you have a password.\n";
		cout << "Enter dir to change directory (soon)\n";
		cout << "Enter cdir to see current dir directory\n";
		cout << "Enter shutdown to safely shutdown the system\n";
		cout << "Enter go back to go back in case of a bug or glitch\n";
		cout << "--------------------------\n";
		goto label_3;
	}
	if (input1 == "specs" or input1 == "SPECIFICATIONS" or input1 == "SPECS" or input1 == "specifications" or input1 == "Specs" or input1 == "Specifications") {
	cout << "------------------------------------------\n";
	cout << " RAM MEMORY:" << totalPhysMem << " Megabytes\n";
	cout << " HARD DRIVE SPACE (Allocated for OS):" << totalVirtualMem << " Gigabytes\n";
	cout << "Processor: unknown x86x64 processor\n";
	cout << "Hard drive: Unknown SATA ACHI Drive\n";
      DWORD test = GetLogicalDriveStrings( mydrives, lpBuffer);

      printf("The logical drives of this machine are:\n\n");

      for(int d = 0; d<100; d++)    printf("%c", lpBuffer[d]);


      printf("\n");
      cout << "------------------------------------------\n";
      goto label_3;
	}
	if (input1 == "red" or input1 == "RED") {
		system("color C7");
	}
	if (input1 == "dir" or input1 == "DIR"){
		cout << "SOON!\n";
		
	}
	if (input1 == "cdir" or input1 == "CDIR"){
		cout << "current dir is: " << pathh << "\n";
	}
	if (input1 == "logout" or input1 == "LOGOUT" and b == 51) {
		goto label_0;
	}
	if (input1 == "logout" or input1 == "LOGOUT" and b == 0) {
		cout << "This account is not locked. You need to have a password to log out. To set a password enter password.\n";
		goto label_3;
	}
	if (input1 == "BLACK" or input1 == "black") {
		system("color 0f");
		goto label_3;
	}
	if (input1 == "gray" or input1 == "GRAY") {
		system("color 8F");
		goto label_3;
	}
	if (input1 == "BLUE" or input1 == "blue") {
		system("color B4");
		goto label_3;
	}
	if (input1 == "WHITE" or input1 == "white") {
		system("color F0");
		goto label_3;
	}
	if (input1 == "crash"){
		system("color C7");
		cout << "ERR 0x0000099912CVOS - Stack overflow\n";
		return 0;
	}
	if (input1 == "cls"){
		system("CLS");
		goto label_3;
	}
	if (input1 == "open"){
		cout << "UNDER CONSTRUCTION!\n";
		goto label_3;
	}
	if (input1 == "Go back") {
		goto label_3;
	}
	if (input1 == "run"){
		cout << "Enter file path and name (eg. C:/Folder/Script.sh) and x to go back:\n";
		string runprogram;
		cin >> runprogram;
		if (runprogram == "x" or runprogram == "X") {
			cout << "Canceled\n";
			Sleep(1122);
			goto label_3;
		}
		system(runprogram.c_str());
		cout << "Done!\n";
		goto label_3;
	}
	if (input1 == "shutdown") {
		cout << "Cleaning up memory...\n";
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		e = 0;
		f = 0;
		input1 = ' ';
		pathh = ' ';
		fileopen = ' ';
		Sleep(2222);
		cout << "Reset all variables and strings\n";
		system("color 0f");
		Sleep(1345);
		cout << "Power off\n";
		Sleep(512);
		return 0;
	}
	if (input1 == "password" or input1 == "PASSWORD") {
		cout << "Enter a password!(only numbers and letters): ";
		cin >> password1;
		cout << "Password set, rebooting!";
		Sleep(1123);
		c = 5;
		b = 51;
		goto label_0;
	}
	else {
		goto label_3;
	}
		return 0;
}
