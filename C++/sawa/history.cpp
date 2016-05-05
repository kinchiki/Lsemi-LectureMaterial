#include "history.h"
#include <iostream>
using std::cout; using std::endl; using std::string;

void History::ShowData() const
{
    cout << id << "人目" << endl;
    cout << zidai << endl;
    cout << name << endl;
    cout << action << endl;
}

History::History() :
    id(0), zidai(""), name(""), action("") {
}
History::History(int i, string z, string n, string a) :
    id(i), zidai(z), name(n), action(a) {
}
