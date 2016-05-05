#include "Animal.h"
#include <iostream>
using std::cout; using std::endl;

int Animal::getAge() const { return age; }
void Animal::setAge(int a) { age = a; }

double Animal::getWeight() const { return weight; }
void Animal::setWeight(int w) { weight = w; }

std::string Animal::getName() const { return name; }

Dog::Dog() : variety("不明") {
     kind = "犬";
     cout << "Dogクラスのデフォルトコンストラクタ" << endl;
}
Dog::Dog(int a, double w, std::string n, std::string v) :
    Animal(a, w, n, "犬"), variety(v) {
    cout << "Dogクラスの引数コンストラクタ" << endl;
}
std::string Dog::getVariety() const { return variety; }
