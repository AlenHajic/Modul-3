#ifndef BOAT_HPP
#define BOAT_HPP
#include <string>
using namespace std;

class Boat
{
private:
	string name;
	int length;
public:
	Boat(string name, int length);
	Boat();
	string getName();
	int getLength();
	void setName(string newName);
	void setLength(int newLength);
	virtual string toString();
	virtual ~Boat() = default;

};

class sailingBoat : public Boat
{
private:
	int sailArea;
public:
	sailingBoat(string name, int length, int sailArea);
	sailingBoat();
	int getSailArea();
	void setSailArea(int newSailArea);
	string toString() override;
};

class motorBoat : public Boat
{
private:
	int motorCap;
public:
	motorBoat(string name, int length, int motorCap);
	motorBoat();
	int getMotorCap();
	void setMotorCap(int motorCap);
	string toString() override;
};

#endif // !BOAT_HPP
