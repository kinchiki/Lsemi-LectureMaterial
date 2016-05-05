#include <iostream>
#include <string>
using namespace std;

class Car{
	protected:
	int mileage;//距離
	int fuel;//ガソリン

public:
	void goForward() {//前進のときは、キョリ＋２、ガソリン-1する
		if(mileage<=20){
			mileage+=2;
			fuel -=1;
			cout<<"距離:"<<mileage<<",ガソリン:"<<fuel<<endl;
		}
	}
	void turnLeft(){//左折のときは、キョリ+1、ガソリン-2する
		if(mileage +1<=20)
		{
			mileage +=1;
			fuel -=2;
			cout<<"距離:"<<mileage<<",ガソリン:"<<fuel<<endl;
		}
	}
	void turnRight(){//右折のときは左折と同じ
		if(mileage +1<=20)
		{
			mileage +=1;
			fuel -=2;
			cout<<"距離:"<<mileage<<",ガソリン:"<<fuel<<endl;
		}
	}
	void refue(){//給油する。ガソリンを20にする。
		fuel =20;
		cout<<"ガソリンを満タン(20)にしました"<<endl;
	}
	int getMileage(){
		return mileage;
	}
	int getFuel(){
		return fuel;
	}
	Car();
	Car(int m,int f);
};

Car::Car():mileage(0),fuel(10){
	cout<<"Carのデフォルトコンストラクタ"<<endl;
}
Car::Car(int m,int f):mileage(m),fuel(f){
	cout<<"引数コンストラクタ"<<endl;
}

void main(){
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
		if(str=="W"){car.goForward();
		}else if(str =="A"){car.turnLeft();
		}else if(str =="D"){car.turnRight();}else{cout<<"入力エラーです。"<<endl;}
	}
	cout<<"距離が20超えました！終了します"<<endl;//キョリが20超えたことを示す
	getchar();
}
