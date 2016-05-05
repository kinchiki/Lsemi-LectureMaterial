#include <iostream>
#include "Human.h"

int main()
{
    using namespace std;

    Human h(19, 64.5, 175.5, "boy", "男");
    int key = 0;
    int count = 0;
    int age = 0;
    age = h.getAge();
    h.showStatus();

    //インデントがおかしかった
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
