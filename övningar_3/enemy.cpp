#include "sprite.h"

enemy::enemy(int x, int y, int damage, string weapon) : sprite(x, y), damage(damage), weapon(weapon)
{
}

enemy::enemy() : sprite(), damage(0), weapon("none")
{
}

int enemy::getDamage() const
{
	return this->damage;
}

void enemy::setDamage(int newDamage)
{
	this->damage = newDamage;
}

string enemy::getWeapon() const
{
	return this->weapon;
}

void enemy::setWeapon(string newWeapon)
{
	this->weapon = newWeapon;
}

string enemy::toString() const
{
	return "Enemy is currently on " + to_string(getX()) + ", " + to_string(getY()) + " with a " + this->weapon + " that does " + to_string(this->damage) + " damage";
}
