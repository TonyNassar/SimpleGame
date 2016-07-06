#include "enums.h"
#include "MainMenu.h"
#include <iostream>
using namespace std;
MainMenu::MainMenu()
{
	Difficulty myDifficulty;
	input = 0;
	cout << "Welcome to beat the ninja!" << endl;
	cout << "What difficulty would you like?"
		"\n\t1. Easy"
		"\n\t2. Normal"
		"\n\t3. Hard";
	while (input < 1 || input > 3)
	{
		cin >> input;
		if (input == 1)
		{
			myDifficulty = Difficulty::EASY;
		}
		else if (input == 2)
		{
			myDifficulty = Difficulty::NORMAL;
		}
		else if (input == 3)
		{
			myDifficulty = Difficulty::HARD;
		}
	}
}

MainMenu::~MainMenu()
{
}