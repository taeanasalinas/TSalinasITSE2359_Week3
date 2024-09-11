#include "Library.h"
#include <iostream>

using namespace std;

Library::Library() : name("") {}

Library::Library(string name) : name(name) {}

string Library::getName() const {return name;}


