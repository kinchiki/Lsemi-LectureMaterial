#include "Car.h"
#include <iostream>
#include <string>

//返り値の型はintです
int main(){
    using namespace std;

    Car car(0,10);

    string str="";
    cout<<"距離20になるまで走ります！"<<endl;
    while(car.getMileage()<20)//距離が20未満の間ずっと実行　20以上ならループ抜ける
    {
        if(car.getFuel()<=2){//ガソリンが2以下だったら実行
            cout<<"ガソリンが2以下になったので給油します"<<endl;//給油
            car.refue();}
        cout<<"車を動かします。「W」で前進、「A」で左折、「D」で右折します。"<<endl;
        cin>>str;

        //見辛い！
        if(str=="W"){car.goForward();
        }else if(str =="A"){car.turnLeft();
        }else if(str =="D"){car.turnRight();
        }else{cout<<"入力エラーです。"<<endl;}
    }
    cout<<"距離が20超えました！終了します"<<endl;//キョリが20超えたことを示す
    getchar();
}
