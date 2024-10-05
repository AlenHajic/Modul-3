#include <iostream>
#include "Media.h"

int main() {
    // Test Media class pointer with book object
    Media* book = new Book("To Kill A Mockingbird", 1960, "Harper Lee");
    cout << book->toString() << endl;
    

    // Test Media class pointer with movie object 
    Media* movie = new Movie("AKIRA", 1988, "120", "anime");
    cout << movie->toString() << endl;

    //Slutsats med toString() funktionerna �r att media kallar p� sina egna toString()
    //funktioner, skulle toString() i media sit�llet vara virtuell s� skulle vi kunna f�
    //tag p� b�de books och movies egna toString() funktioner. 

    //Slutsats med de andra funktionerna i klasserna book and movie �r att de inte
    //g�r att kalla p� deras egna funktioner eftersom dessa inte �r funktioner som
    //vi overridear fr�n media. D�rf�r kan vi endasta anv�nda media funktioner.
    //Ut�ver det h�r, om book och movie inte var subklasser till media s� skulle vi
    //inte ens kunna skapa media pointers som pekar p� objekt av book och movie.
    //Ist�llet skulle vi bara f� kompilerings fel.

    delete book;
    delete movie;
  

    return 0;
}
