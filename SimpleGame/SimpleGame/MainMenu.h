#pragma once
#ifndef MAINMENU_H
#define MAINMENU_H
#include "game.h"
class MainMenu: public Game
{
public:
	MainMenu();
	~MainMenu();

private:
	int input;
};
#endif // !MAINMENU_H