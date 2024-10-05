#include <iostream>
#include "Media.h"

int main() {
    // Test Media class (pointer)
    Media* media = new Media("LOTR", 2001);
    cout << media->toString() << endl;

    //Test Book class (pointer)
    Book* book = new Book("To Kill A Mockingbird", 1960, "Harper Lee");
    cout << book->getAuthor() << endl;

    //Test Movie class (pointer)
    Movie* movie = new Movie("AKIRA", 1988, "120", "anime");
    movie->setGenre("thriller");
    cout << movie->getGenre() << endl;

    return 0;
}
