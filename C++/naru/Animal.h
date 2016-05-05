#ifndef _SAMPLE_20151014
#define _SAMPLE_20151014

#include <string>

class petAnimal{
protected:
    int age;
    int price;
    double weight;
    std::string name;
    std::string kind;

public:
    petAnimal();
    //引数名が宣言と実装で違うのはやめよう
    petAnimal(int a, int p, double w, std::string n, std::string k);

    void setAge(int setA) ;
    void setPrice(int setP) ;
    void setWeight (double setW) ;
    void setName (std::string setN) ;
    void setKind (std::string setK) ;

    int getAge () const ;
    //自分で作った関数は宣言と実装で関数名が違ったいた 戻り値はint
    int getPrice () const ;
    double getWeight () const ;
    std::string getName () const ;
    std::string getKind () const ;

    virtual void showStatus() const;
};

class Dog : public petAnimal{
    std::string variety;
public:
    Dog();
    Dog(int a, int p, double w, std::string n, std::string v);
    std::string getVariety() const;
    void showStatus() const;
};

class Cat : public petAnimal{
    std::string variety;
public:
    Cat();
    Cat(int a, int p, double w, std::string n, std::string v);
    std::string getVariety() const;
    void showStatus() const;
};

#endif
