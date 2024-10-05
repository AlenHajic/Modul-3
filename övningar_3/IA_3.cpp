#include <iostream>
#include "Media.h"

int main() {
    // Test Media class pointer with book object
    Media* book = new Book("To Kill A Mockingbird", 1960, "Harper Lee");
    cout << book->toString() << endl;
    

    // Test Media class pointer with movie object 
    Media* movie = new Movie("AKIRA", 1988, "120", "anime");
    cout << movie->toString() << endl;

    //Slutsats med toString() funktionerna är att media kallar på sina egna toString()
    //funktioner, skulle toString() i media sitället vara virtuell så skulle vi kunna få
    //tag på både books och movies egna toString() funktioner. 

    //Slutsats med de andra funktionerna i klasserna book and movie är att de inte
    //går att kalla på deras egna funktioner eftersom dessa inte är funktioner som
    //vi overridear från media. Därför kan vi endasta använda media funktioner.
    //Utöver det här, om book och movie inte var subklasser till media så skulle vi
    //inte ens kunna skapa media pointers som pekar på objekt av book och movie.
    //Istället skulle vi bara få kompilerings fel.

    delete book;
    delete movie;
  

    return 0;
}
