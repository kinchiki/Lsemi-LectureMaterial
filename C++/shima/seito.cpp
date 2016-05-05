#include <iostream>
#include "seito.h"
using std::cout; using std::endl;

void seito::ShowData() const //kntiに入った数字に合わせて体調状態を出力。
{
    if (knti == 0)
    {
        cout << "結果:"<<name<<"の体調は通常、健康体です。" << endl;
    }
    else if (knti == 1)
    {
        cout << "結果:"<<name<<"の体調は不健康、身体に気を付けましょう。" << endl;
    }
    else if (knti == 2)
    {
        cout << "結果:"<<name<<"の体調は最悪、直ぐに病院に行きましょう。" << endl;
    }
    else
    {
        cout << "体調不明、指定の入力をして下さい。" << endl;
    }

    return;
}
