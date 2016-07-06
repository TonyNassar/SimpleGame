#include "enemy.h"

Enemy::Enemy()
{
	health = 100;
	attack = 10;
}

void Enemy::setHealth(int health)
{
	this->health = health;
}

void Enemy::setAttack(int attack)
{
	this->attack = attack;
}

int Enemy::getAttack() const
{
	return attack;
}

int Enemy::getHealth() const
{
	return health;
}

Enemy::~Enemy()
{
}