#include <iostream>
#include <string>
using namespace std;

class petAnimal{
protected:
	int age;
	int price;
	double weight;
	string name;
	string kind;

public:
	petAnimal();
	petAnimal(int a, int p, double w, string n, string k);

	void setAge(int setA) ;
	void setprice(int setP) ;
	void setWeight (double setW) ;
	void setName (string setN) ;
	void setKind (string setK) ;

	int getAge () const ;
	int getprice () const ;
	double getWeight () const ;
	string getName () const ;
	string getKind ()const ;

	virtual void showState() const;
};

class Dog : public petAnimal{
	string variety;
public:
	Dog();
	Dog(int a, int p, double w, string n, string v);
	string getVariety() const;
	void showState() const;

};

class Cat : public petAnimal{
	string variety;
public:
	Cat();
	Cat(int a, int p, double w, string n, string v);
	string getVariety() const;
	void showState() const;

};


string Dog :: getVariety() const{	return variety;	}
string Cat :: getVariety() const{	return variety;	}


void petAnimal :: setAge(int setA) {	age = setA;	}
void petAnimal :: setPrice(int setP) {	price = setP;	}
void petAnimal :: setWeight (double setW) {weight = setW;	}
void petAnimal :: setName (string setN) {	name = setN;	}
void petAnimal :: setKind (string setK) {	kind = setK;	}

int petAnimal :: getAge () const {		return age;	}
void petAnimal :: getPrice() const{	return price;	}
double petAnimal :: getWeight () const {	return weight;	}
string petAnimal :: getName () const {	return name;	}
string petAnimal :: getKind ()const {	return kind;	}


void petAnimal :: showState() const{
	cout 	<< "年齢:" << age
 		<< "値段:" << price
		<< "体重:" << weight
		<< "名前:" << name
		<< "種族:" << kind << endl;
}

void Dog :: showState() const{
	cout 	<< "年齢:" << age
 		<< "値段:" << price
		<< "体重:" << weight
		<< "名前:" << name
		<< "種族:" << kind << endl;
}

void Cat :: showState() const{
	cout 	<< "年齢:" << age
 		<< "値段:" << price
		<< "体重:" << weight
		<< "名前:" << name
		<< "種族:" << kind << endl;
}


petAnimal :: petAnimal () : age(0),price(0), weight(0.0), name("未決定"), kind("不明"){ }

petAnimal :: petAnimal (int a, int p,double w, string n, string k) : age(a),price(p), weight(w), name(n), kind(k) { }

Dog :: Dog (): variety("不明"){
		kind = "イヌ";
}

Dog :: Dog (int a,int p, double w, string n, string v):Animal(a, w, n, "イヌ"),variety(v){ }

Cat :: Cat (): variety("不明"){
		kind = "ネコ";
}

Cat :: Cat (int a,int p, double w, string n, string v):Animal(a, w, n, "ネコ"),variety(v){ }


int main () {

	petAnimal petanimal(10,120000, 5.5, "かんたろう", "サメ");
	Dog dog(3, 430000,4.5, "タマ", "チワワ" );
	Cat cat(2, 230000,2.5, "ぽち", "ロシアンブルー" );

	cat.ShowState();

	return 0;

}
