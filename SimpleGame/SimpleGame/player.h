#pragma once
#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
	Player();
	void setHealth(int health);
	void setAttack(int attack);

	int getHealth() const;
	int getAttack() const;
	~Player();

private:
	int attack;
	int health;
};

#endif // !PLAYER_H