#ifndef MEDIA_HPP
#define MEDIA_HPP
#include <string>
using namespace std;

class Media
{
private:
	string title;
	int publicationYear;
public:
	Media(string name, int publicationYear);
	Media();

	string getTitle();
	int getPublicationYear();
	void setTitle(string newName);
	void setPublicationYear(int newPublicationYear);
	string toString();
	virtual ~Media() = default;
};

class Book : public Media
{
private:
	string author;
public:
	Book(string title, int publicationYear, string author);
	Book();
	string getAuthor();
	void setAuthor(string author);
	string toString();
};

class Movie : public Media
{
private:
	string playTime;
	string genre;
public:
	Movie(string title, int publicationYear, string playTime, string genre);
	Movie();
	string getPlayTime();
	string getGenre();
	void setPlayTime(string newPlayTime);
	void setGenre(string newGenre);
	string toString();

};

#endif // !MEDIA_HPP
#pragma once
