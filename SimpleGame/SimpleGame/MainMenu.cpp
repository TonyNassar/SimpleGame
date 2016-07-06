#include "enums.h"
#include "MainMenu.h"
#include "ninja.h"
#include <iostream>

using namespace std;
MainMenu::MainMenu()
{
	Ninja n;
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
			n.setHealth(n.getHealth() / 2);
			cout << "You picked easy mode." << endl;
		}
		else if (input == 2)
		{
			myDifficulty = Difficulty::NORMAL;
			n.setAttack(n.getAttack() * 2);
			cout << "You picked normal mode." << endl;
		}
		else if (input == 3)
		{
			myDifficulty = Difficulty::HARD;
			n.setHealth(n.getHealth() * 2);
			n.setAttack(n.getAttack() * 2);
			cout << "You picked hard mode." << endl;
		}
	}
}

MainMenu::~MainMenu()
{
}