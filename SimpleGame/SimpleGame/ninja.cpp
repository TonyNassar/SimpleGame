#include "ninja.h"
Ninja::Ninja()
{
	attack = 25;
}

void Ninja::setAttack(int attack)
{
	this->attack = attack;
}

int Ninja::getAttack()const
{
	return attack;
}
Ninja::~Ninja()
{
}