#include "Book.h"
#include "Library.h"
#include "Member.h"

using namespace std;

int main () {
    Library store;

    store.addBook(Book("Harry Potter", "JK Rowling", "2001"));
    store.addBook(Book("Divergent", "Veronica Roth", "2011"));

    Member member1("Ronald Weasley");
    Member member2("Shailene Woodley");

    store.addMember(member1);
    store.addMember(member2);

    store.displayAvailableBook();
}