#ifndef SPRITE_HPP
#define SPRITE_HPP
#include <string>
using namespace std;

class sprite
{
private:
	int x;
	int y;
public:
	sprite(int x, int y);
	sprite();
	int getX() const;
	void setX(int newX);
	int getY() const;
	void setY(int newY);
	virtual string toString() const = 0;
	virtual ~sprite() = default;
};

class player : public sprite
{
private:
	int health;
public:
	player(int x, int y, int health);
	player();
	int getHealth() const;
	void setHealth(int setHealth);
	void damageToHealth(int damageTaken);
	bool checkIsAlive();
	string toString() const override;
};

class enemy : public sprite
{
private:
	int damage;
	string weapon;
public:
	enemy(int x, int y, int damage, string weapon);
	enemy();
	int getDamage() const;
	void setDamage(int newDamage);
	string getWeapon() const;
	void setWeapon(string newWeapon);
	string toString() const override;
};

#endif // !SPRITE_HPP


