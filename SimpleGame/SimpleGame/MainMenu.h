#pragma once
#ifndef MAINMENU_H
#define MAINMENU_H
#include "game.h"
#include "gameseq.h"
class MainMenu: public Game , public GameSeq
{
public:
	MainMenu();
	~MainMenu();

private:
	int input;
};
#endif // !MAINMENU_H