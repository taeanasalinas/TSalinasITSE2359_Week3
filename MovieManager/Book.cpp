#include <vector>
#include <iostream>
#include "Book.h"
#include "Library.h"


using namespace std;
    
Book::Book (): title(""), author (""), year (0), available(true){}
    
Book::Book(std::string title, std::string author, int year, bool available) : title(title), author(author), year(year), available(available){}

string Book::getTitle() const {
    return title;

string Book::getAuthor() const {
    return author;

int Book::getYearPublished() const {
    return year;
}
}
}

