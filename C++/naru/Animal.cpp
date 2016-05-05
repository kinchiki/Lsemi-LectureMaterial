#include "Animal.h"
#include <iostream>
using std::cout; using std::endl;using std::string;

petAnimal :: petAnimal () :
    age(0),price(0), weight(0.0), name("未決定"), kind("不明") {
}
petAnimal :: petAnimal (int a, int p,double w, string n, string k) :
    age(a),price(p), weight(w), name(n), kind(k) {
}

void petAnimal :: setAge(int setA) { age = setA; }
void petAnimal :: setPrice(int setP) { price = setP; }
void petAnimal :: setWeight (double setW) { weight = setW; }
void petAnimal :: setName (string setN) { name = setN; }
void petAnimal :: setKind (string setK) { kind = setK; }

int petAnimal :: getAge () const { return age; }
int petAnimal :: getPrice() const{ return price; }
double petAnimal :: getWeight () const { return weight; }
string petAnimal :: getName () const { return name; }
string petAnimal :: getKind ()const { return kind; }

void petAnimal :: showStatus() const{
    cout << "年齢:" << age
         << "値段:" << price
         << "体重:" << weight
         << "名前:" << name
         << "種族:" << kind << endl;
}


Dog :: Dog (): variety("不明"){
        kind = "イヌ";
}
/* 継承元はAnimalクラスではなくpetAnimal
   petAnimalのコンストラクタには引数なしかint,int,double,string,stringのものしかない */
Dog :: Dog (int a, int p, double w, string n, string v) :
    petAnimal(a, p, w, n, "イヌ"),variety(v) {
}

string Dog :: getVariety() const{ return variety; }

void Dog :: showStatus() const{
    cout << "年齢:" << age
         << "値段:" << price
         << "体重:" << weight
         << "名前:" << name
         << "種族:" << kind << endl;
}


Cat :: Cat (): variety("不明"){
        kind = "ネコ";
}
Cat :: Cat (int a, int p, double w, string n, string v) :
    petAnimal(a, p, w, n, "ネコ"),variety(v) {
}

string Cat :: getVariety() const{ return variety; }

void Cat :: showStatus() const{
    cout << "年齢:" << age
         << "値段:" << price
         << "体重:" << weight
         << "名前:" << name
         << "種族:" << kind << endl;
}
