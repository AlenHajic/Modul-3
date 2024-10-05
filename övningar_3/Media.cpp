#include "Media.h"

Media::Media(string title, int publicationYear) : title(title), publicationYear(publicationYear)
{
}

Media::Media() : title("?"), publicationYear(-1)
{
}

string Media::getTitle()
{
	return this->title;
}

int Media::getPublicationYear()
{
	return this->publicationYear;
}

void Media::setTitle(string newTitle)
{
	this->title = newTitle;
}

void Media::setPublicationYear(int newPublicationYear)
{
	this->publicationYear = newPublicationYear;
}

string Media::toString()
{
	string mediaInfo = "Title:" + this->title + " Year of publication:" + to_string(this->publicationYear);
	return mediaInfo;
}




