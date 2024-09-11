#ifndef LIBRARY_H
#define LIBRARY_H

#include<string>
#include<vector>
#include "Book.h"

using namespace std;

class Library {
        private:
        string name;
        vector<Book> shelfNumber;

        public:
        Library();
        Library(string name);

        string getName() const;
        
}