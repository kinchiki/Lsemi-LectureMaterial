#include<iostream>
#include<string>
using namespace std;

class Human {
protected:
	int age;//年齢
	double weight;//体重
	double tall;//身長
	string name;//名前
	string sex;//性別
public:
	Human(int a, double w, double t, string n, string s) :age(a), weight(w), tall(t), name(n), sex(s)
	{
	}
	void showState()const;
	void StandUp()const;
	void Toukou()const;
	void Study()const;
	void Kitaku()const;
	void Neru()const;
	//ここからセッターを作る
	void setAge(int a) {
		age = a;
	}
	void setWeight(double w) {
		weight = w;
	}
	void setTall(double t) {
		tall = t;
	}
	void setName(string n) {
		name = n;
	}
	void setKind(string s) {
		sex = s;
	}
	//ここからゲッターを作る
	int getAge() const { return age; }
	double getWeight() const { return weight; }
	double getTall()const { return tall; }
	string getName()const { return name; }
	string getSex()const { return sex; }
};

//個人情報の表示
void Human::showState()const {
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
int main()
{   //このようにしてここで、年齢,体重,身長,名前,性別を手打ちで入力してください
	Human h(19, 64.5, 175.5, "boy", "男");
	int key = 0;
	int count = 0;
	int age = 0;
	age = h.getAge();
	h.showState();
			while (!(age == 22)){
				cout << "Input number (0～4)";
				cin >> key;
				cout << "your select number is  " << key << endl;
				if (key == 0)
				{
					h.StandUp();
				}
				else if (key == 1) {
					h.Toukou();
				}
				else if (key == 2) {
					h.Study();
				}
				else if (key == 3) {
					h.Kitaku();
				}
				else if (key == 4) {
					h.Neru();
					count++;
					if (count == 10) {
						age++;
						cout << "あなたは" << age << "歳になりました" << endl;
						count = 0;
					}

				}
				else {
					cout << "ちゃんとうってください" << endl;
				}

			}
	getchar();
	return 0;
}
