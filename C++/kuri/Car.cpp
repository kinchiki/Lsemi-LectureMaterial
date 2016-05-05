#include "Car.h"
#include <iostream>
using std::cout; using std::endl;

void Car::goForward() {//前進のときは、キョリ＋２、ガソリン-1する
    if(mileage<=20){
        mileage+=2;
        fuel -=1;
        cout<<"距離:"<<mileage<<",ガソリン:"<<fuel<<endl;
    }
}
void Car::turnLeft(){//左折のときは、キョリ+1、ガソリン-2する
    if(mileage +1<=20)
    {
        mileage +=1;
        fuel -=2;
        cout<<"距離:"<<mileage<<",ガソリン:"<<fuel<<endl;
    }
}
void Car::turnRight(){//右折のときは左折と同じ
    if(mileage +1<=20)
    {
        mileage +=1;
        fuel -=2;
        cout<<"距離:"<<mileage<<",ガソリン:"<<fuel<<endl;
    }
}
void Car::refue(){//給油する。ガソリンを20にする。
    fuel =20;
    cout<<"ガソリンを満タン(20)にしました"<<endl;
}

int Car::getMileage() const {
    return mileage;
}
int Car::getFuel() const {
    return fuel;
}

Car::Car():mileage(0),fuel(10){
    cout<<"Carのデフォルトコンストラクタ"<<endl;
}
Car::Car(int m,int f):mileage(m),fuel(f){
    cout<<"引数コンストラクタ"<<endl;
}
