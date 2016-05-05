#ifndef INCLUDED_Sample_h_
#define INCLUDED_Sample_h_

#include <string>

class Animal {
protected:
    int age;
    double weight;
    std::string name;
    std::string kind;

public:
    virtual void showData() const;
    Animal();
    Animal(int a, double w, std::string n, std::string k);
    int getAge() const;
    void setAge(int a);
    double getWeight() const;
    void setWeight(int w);
    std::string getName() const;
}; // ;が必要


class Dog : public Animal {
    const std::string variety;

public:
    void bark() const;
    void showData() const;
    Dog();
    Dog(int a, double w, std::string n, std::string v);
    std::string getVariety() const;
};

#endif
