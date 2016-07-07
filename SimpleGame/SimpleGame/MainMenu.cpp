#include "enums.h"
#include "MainMenu.h"
#include "ninja.h"
#include "enemy.h"
#include <iostream>

using namespace std;
MainMenu::MainMenu()
{
	cout << "Welcome to beat the ninja!" << endl;
	cout << "What difficulty would you like?"
		"\n\t1. Easy"
		"\n\t2. Normal"
		"\n\t3. Hard" << endl;
}

MainMenu::~MainMenu()
{
}