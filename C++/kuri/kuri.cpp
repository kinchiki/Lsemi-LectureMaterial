#include <iostream>
#include <string>
using namespace std;

class Car{
	protected:
	int mileage;//����
	int fuel;//�K�\����

public:
	void goForward() {//�O�i�̂Ƃ��́A�L�����{�Q�A�K�\����-1����
		if(mileage<=20){
			mileage+=2;
			fuel -=1;
			cout<<"����:"<<mileage<<",�K�\����:"<<fuel<<endl;
		}
	}
	void turnLeft(){//���܂̂Ƃ��́A�L����+1�A�K�\����-2����
		if(mileage +1<=20)
		{
			mileage +=1;
			fuel -=2;
			cout<<"����:"<<mileage<<",�K�\����:"<<fuel<<endl;
		}
	}
	void turnRight(){//�E�܂̂Ƃ��͍��܂Ɠ���
		if(mileage +1<=20)
		{
			mileage +=1;
			fuel -=2;
			cout<<"����:"<<mileage<<",�K�\����:"<<fuel<<endl;
		}
	}
	void refue(){//��������B�K�\������20�ɂ���B
		fuel =20;
		cout<<"�K�\�����𖞃^��(20)�ɂ��܂���"<<endl;
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
	cout<<"Car�̃f�t�H���g�R���X�g���N�^"<<endl;
}
Car::Car(int m,int f):mileage(m),fuel(f){
	cout<<"�����R���X�g���N�^"<<endl;
}

void main(){
	Car car(0,10);

	string str="";
	cout<<"����20�ɂȂ�܂ő���܂��I"<<endl;
	while(car.getMileage()<20)//������20�����̊Ԃ����Ǝ��s�@20�ȏ�Ȃ烋�[�v������
	{
		if(car.getFuel()<=2){//�K�\������2�ȉ�����������s
			cout<<"�K�\������2�ȉ��ɂȂ����̂ŋ������܂�"<<endl;//����
			car.refue();}
		cout<<"�Ԃ𓮂����܂��B�uW�v�őO�i�A�uA�v�ō��܁A�uD�v�ŉE�܂��܂��B"<<endl;
		cin>>str;
		if(str=="W"){car.goForward();
		}else if(str =="A"){car.turnLeft();
		}else if(str =="D"){car.turnRight();}else{cout<<"���̓G���[�ł��B"<<endl;}
	}
	cout<<"������20�����܂����I�I�����܂�"<<endl;//�L������20���������Ƃ�����
	getchar();
}
