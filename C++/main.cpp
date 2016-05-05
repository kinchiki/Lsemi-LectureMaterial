#include "Animal.h"
#include <iostream>

int main() {
    using namespace std;

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
