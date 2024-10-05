#include "sprite.h"

sprite::sprite(int x, int y) : x(x), y(y)
{
}

sprite::sprite() : x(0), y(0)
{
}

int sprite::getX() const
{
	return this->x;
}

void sprite::setX(int newX)
{
	this->x = newX;
}

int sprite::getY() const
{
	return this->y;
}

void sprite::setY(int newY)
{
	this->y = newY;
}


