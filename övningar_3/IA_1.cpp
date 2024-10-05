#include <iostream>
#include "Media.h"

int main() {
    // Test Media class
    Media media("Generic Title", 2000);
    std::cout << "Media:" << std::endl;
    std::cout << media.toString() << std::endl;
    media.setTitle("New Title");
    media.setPublicationYear(2022);
    std::cout << "Updated Media:" << std::endl;
    std::cout << media.toString() << std::endl;

    // Test Book class
    Book book("The Catcher in the Rye", 1951, "J.D. Salinger");
    std::cout << "\nBook:" << std::endl;
    std::cout << book.toString() << std::endl;
    book.setTitle("New Book Title");
    book.setPublicationYear(2000);
    book.setAuthor("New Author");
    std::cout << "Updated Book:" << std::endl;
    std::cout << book.toString() << std::endl;

    // Test Movie class
    Movie movie("Inception", 2010, "148 min", "Science Fiction");
    std::cout << "\nMovie:" << std::endl;
    std::cout << movie.toString() << std::endl;
    movie.setTitle("New Movie Title");
    movie.setPublicationYear(2015);
    movie.setPlayTime("150 min");
    movie.setGenre("Action");
    std::cout << "Updated Movie:" << std::endl;
    std::cout << movie.toString() << std::endl;

    return 0;
}
