#ifndef BOOK_H
#define BOOK_H
#include <string>

using namespace std;
    class Book{
        private: 
            string title;
            string author;
            int yearPublished;
            bool isAvailable;

        public:
            Book();

            Book(string title, string author, int yearPublished, bool isAvailable = "true");

            string getTitle();
            string getAuthor();
            int getYearPublished();
            bool isAvailable();
    
};
#endif