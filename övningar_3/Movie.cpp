#include "Media.h"

Movie::Movie(string title, int publicationYear, string playTime, string genre) : Media(title, publicationYear), playTime(playTime), genre(genre)
{
}

Movie::Movie() : Media(), playTime("?"), genre("?")
{
}

string Movie::getPlayTime()
{
	return this->playTime;
}

string Movie::getGenre()
{
	return this->genre;
}

void Movie::setPlayTime(string newPlayTime)
{
	this->playTime = newPlayTime;
}

void Movie::setGenre(string newGenre)
{
	this->genre = newGenre;
}

string Movie::toString()
{
	string movieInfo = "Playtime:" + this->playTime + " Genre:" + this->genre;
	return movieInfo;
}
