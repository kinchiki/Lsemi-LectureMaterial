/*
課題の説明をよく読め
ヘッダと実装
ワンタイムインクルード(インクルードガード)
文字コード No Shift_JIS
main関数の戻り値の型
カプセル化 由々しき事態 メンバ変数はprivateでセッター、ゲッターを作成しましょう
const
メンバ変数を表示するだけとかメンバ変数を変えないメンバ関数はconstメンバ関数にしましょう
宣言と実装の順番
宣言と実装の順番は同じにしましょう
記法、スペース
キャメルケース
パスカルケース
スネークケース

state
澤田はオリジナリティあった
署名
*/

#include <iostream>
#include <string>
using namespace std;


class Animal {
protected:
    int age;
    double weight;
    string name;
    string kind;

public:
    virtual void showData() const;
    Animal();
    Animal(int a, double w, string n, string k);
    int getAge() const { return age; }
    void setAge(int a) { age = a; }
    double getWeight() const { return weight; }
    void setWeight(int w) { weight = w; }
    string getName() const { return name; }
}; // ;が必要

Animal::Animal() : age(0), weight(0.0), name("未決定"), kind("不明") {
        cout << "Animalのデフォルトコンストラクタ" << endl;
}
Animal::Animal(int a, double w, string n, string k) : age(a), weight(w), name(n), kind(k) {
    cout << "Animalの引数コンストラクタ" << endl;
}

void Animal::showData() const {
    cout << name << "は" << kind << "、" << age << "歳で" << weight << "kg " << endl;
}



class Dog : public Animal {
    const string variety;

public:
    void bark() const;
    void showData() const;
    Dog() : variety("不明") {
         kind = "犬";
         cout << "Dogクラスのデフォルトコンストラクタ" << endl;
    }
    Dog(int a, double w, string n, string v) : Animal(a, w, n, "犬"), variety(v) {
        cout << "Dogクラスの引数コンストラクタ" << endl;
    }
    string getVariety() const { return variety; }
};

void Dog::showData() const { //オーバーライド
    cout << name << "は" << kind << "で種類は" << variety << endl;
    cout << age << "歳で" << weight << "kg " << endl << endl;
}
void Dog::bark() const {
    cout << "ワンワン" << endl << endl;
}



int main() {
    Animal anim1(3, 6.5, "太郎丸", "犬"); //オブジェクト生成（オーバーロードされたコンストラクタ）
    anim1.showData();

    Animal anim2; //オブジェクト生成（デフォルトコンストラクタ）
    anim2.showData();

    cout << endl;

    Dog dog(11, 9.5, "パー", "パグ");
    dog.showData();
    dog.bark();
    cout << dog.getWeight() << endl;

    Dog dog2;
    dog2.showData();

    Animal d[4];
    d[2]=Dog();
}
