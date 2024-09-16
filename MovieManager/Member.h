#ifndef MEMBER_H
#define MEMBER_H
#include "Book.h"
#include "Library.h"
#include<string>
#include<vector>

using namespace std;

class Member {
        private:
        string name;
        vector<Book> MemberName;

        public:
        Member();
        Member(string name);

        string getName() const;
}
#endif 