#include "sprite.h"

player::player(int x, int y, int health) : sprite(x, y), health(health)
{
}

player::player() : sprite(), health(0)
{
}

int player::getHealth() const
{
	return this->health;
}

void player::setHealth(int setHealth) 
{
	this->health = setHealth;
}

void player::damageToHealth(int damageTaken)
{
	this->health -= damageTaken;
}

bool player::checkIsAlive()
{
	if (health <= 0)
	{
		return true;
	}
	return false;
}

string player::toString() const
{
	return "Player is currently on " + to_string(getX()) + ", " + to_string(getY()) + " and health is at " + to_string(this->health);
}
