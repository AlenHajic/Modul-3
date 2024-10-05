#include "Media.h"

Book::Book(string Title, int publicationYear, string author) : Media(Title, publicationYear), author(author)
{
}

Book::Book() : Media(), author("?")
{
}

string Book::getAuthor()
{
	return this->author;
}

void Book::setAuthor(string author)
{
	this->author = author;
}

string Book::toString()
{
	string bookInfo = "Author:" + this->author;
	return bookInfo;
}

