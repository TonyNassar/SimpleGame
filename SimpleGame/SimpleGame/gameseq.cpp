#include "gameseq.h"
#include "MainMenu.h"
#include "ninja.h"
#include "player.h"
#include <iostream>
using namespace std;

GameSeq::GameSeq()
{
	Ninja n;
	Player p1;
	Enemy* e = &n;
	Difficulty myDifficulty; 
	gameState myGameState;
	input = 0;
	MainMenu();
	
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
	
	cout << "You have encountered a ninja with " <<
		n.getHealth() << " health." << endl;

	while (n.getHealth() > 0 && p1.getHealth() > 0)
	{
	}
}
	GameSeq::~GameSeq()
{
}