#include <iostream>
#include "Human.h"
using std::cout;
using std::endl;

Human::Human(int a, double w, double t, string n, string s ) :
    age(a), weight(w), tall(t), name(n), sex(s) {
}

void Human::setAge(int a) {
    age = a;
}
void Human::setWeight(double w) {
    weight = w;
}
void Human::setTall(double t) {
    tall = t;
}
void Human::setName(string n) {
    name = n;
}
void Human::setKind(string s) {
    sex = s;
}

int Human::getAge() const { return age; }
double Human::getWeight() const { return weight; }
double Human::getTall() const { return tall; }
string Human::getName() const { return name; }
string Human::getSex() const { return sex; }


void Human::showStatus()const {
    cout << "年齢は　" << age << "体重は　" << weight << "身長は　" << tall << "名前は　" << name << "性別は　" << sex << endl;
}
void Human::StandUp()const {
    cout << name << "は起床した" << endl;
}
void Human::Toukou()const {
    cout << name << "は登校した" << endl;
}
void Human::Study()const {
    cout << name << "勉強した" << endl;
}
void Human::Kitaku()const {
    cout << name << "帰宅した" << endl;
}
void Human::Neru()const {
    cout << name << "眠った" << endl;
}
