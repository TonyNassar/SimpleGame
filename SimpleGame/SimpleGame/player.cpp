#include "player.h"
Player::Player()
{
	attack = 25;
	health = 150;
}
void Player::setAttack(int attack)
{
	this->attack = attack;
}

void Player::setHealth(int health)
{
	this->health = health;
}

int Player::getAttack() const
{
	return attack;
}

int Player::getHealth() const
{
	return health;
}
Player::~Player()
{
}