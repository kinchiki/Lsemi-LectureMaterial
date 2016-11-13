#include <iostream>
#include <string>
using namespace std;

class Creature {
protected:
    string name;
    int age;
    double weight;
    string kind;

public:
    virtual void showData() const {
        cout << name << "," << kind << "," << age << "歳,゙" << weight << "kg " << endl;
    }

    Creature() : name("不明"), age(0), weight(0.0), kind("不明") {}
    Creature(string n, int a, double w, string k)
        : name(n), age(a), weight(w), kind(k) {}
    string getName() const { return name; };
    void setName(string n) { name = n; }
};


class Person : public Creature {
    double height;
    string job;

public:
    void laugh() const { cout << "ｗｗｗ" << endl << endl; }
    void showData() const {
        cout << name << "は" << kind << "、" << age << "歳で"
             << weight << "kg," << height << "cm、職業は" << job << endl;
    }

    Person() : Creature("佐藤", 20, 60.0, "人間"), height(165.0), job("不明") {}
    Person(string n, double a, double w, string k, double h, string j)
        : Creature(n, a, w, "人間"), height(h), job(j) {}
};
