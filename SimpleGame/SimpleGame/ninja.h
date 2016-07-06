#pragma once
#ifndef NINJA_H
#define NINJA_H
#include "enemy.h"
class Ninja: public Enemy
{
public:
	Ninja();
	void setAttack(int attack);

	int getAttack() const;
	~Ninja();

private:
	int health;
	int attack;
};

#endif // !NINJA_H