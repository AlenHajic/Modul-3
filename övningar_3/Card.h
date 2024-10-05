#ifndef CARD_HPP
#define CARD_HPP
#include <string>
using namespace std;

class Card
{
private:
	string name;
	int cardNumber;
public:
	Card(string name, int cardNumber);
	Card();
	string getName() const;
	void setName(string newName);
	int getCardNumber() const;
	void setCardNumber(int newCardNumber);
	virtual string toString() const = 0;
	virtual ~Card() = default;

};

class TimeLimitedCard : public Card
{
private:
	int endingYear;
	int endingMonth;
public:
	TimeLimitedCard(string name, int cardNumber, int endingYear, int endingMonth);
	TimeLimitedCard();
	int getYear() const;
	void setYear(int newYear);
	int getMonth() const;
	void setMonth(int newMonth);
	string toString() const override;
};

class ClipCard : public Card
{
private:
	int sessionsLeft;
public:
	ClipCard(string name, int cardNumber, int sessionsLeft);
	ClipCard();
	int getSessionsLeft() const;
	void AddSession(int amountToAdd);
	void useSession(int amountToUse);
	string toString() const override;
};

#endif // !CARD_HPP
