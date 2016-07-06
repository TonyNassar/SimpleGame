#pragma once
#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
public:
	Enemy();
	void setHealth(int health);
	void setAttack(int attack);

	int getAttack() const;
	int getHealth() const;

	~Enemy();

protected:
	int health;
	int attack;
};

#endif // !ENEMY_H