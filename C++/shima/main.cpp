#include <iostream>
#include "seito.h"

//関数には返り値の型の記述がいる！
int main()
{
    using namespace std;

    seito s;

// めんどいから書かないけどセッターで値をセットするように！
    cout << "名前を入力: "<<endl;
    cin >> s.name;

    cout << "学籍番号を入力: "<<endl;
    cin >> s.number;

    cout << "体調を入力:"<<endl;
    //(0,1,2の三段階で通常、体調不良、危険を表示)
    cin >> s.knti;

    s.ShowData();//void seito::ShowData()へ


    return 0;
}
