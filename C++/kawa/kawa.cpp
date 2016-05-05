//選択肢型レベリングゲーム
#include <iostream>
#include <string>
using namespace std;


class Person
{
	private:
		int time;				//時間
		int money;				//お金
		int stamina;			//体力
		int level;				//レベル

	public:
		void ShowData() const;						//現在データの参照
		Person( int t, int m, int s, int l );		//宣言 + 初期化
		void Arbeit();			//
		void Sleep();			//
		void Eat();				//		レベリング選択肢
		void Training();		//
		void Doping();			//
		void ChoiceMenu();		//メニューから選択しを選択

		void SetTime(int x) { time = x;}	//時間の上書き

};

Person::Person( int t, int m, int s, int l ) : time(t), money(m), stamina(s), level(l)
{
}

void Person::Arbeit()
{
	time -= 2;
	stamina -= 4;
	money += 8;
}
void Person::Sleep()
{
	time -= 2;
	stamina = 10;
}
void Person::Eat()
{
	money -= 3;
	stamina += 2;
	level += 1;
}
void Person::Training()
{
	time -= 1;
	stamina -= 1;
	level += 2;
}
void Person::Doping()
{
	money -= 5;
	level += 4;
}


void Person::ShowData() const
{
	cout << "時間 = " << time << endl
		 << "お金 = " << money << endl
		 << "体力 = " << stamina << endl
		 << "レベル = " << level << endl;
}

void Person::ChoiceMenu()
{
	int choose;
	Person person( 10, 0, 10, 0 );
	person.SetTime(15);

	cout << "時間 = " << time << endl
		 << "お金 = " << money << endl
		 << "体力 = " << stamina << endl
		 << "レベル = " << level << "	にセット" << endl
		 << "--------------------------------------" << endl
		 << "メニューをキーボード(0〜5)から入力してください。" << endl << endl
		 << "1 :	トレーニング		:	( レベル +2 , 時間 -1 , 体力 -1 )" << endl
		 << "2 :	睡眠			:	( 体力 = 10 , 時間 -2 )" << endl
		 << "3 : 	アルバイト		:	( お金 +8 , 時間 -2 , 体力 -4 )" << endl
		 << "4 : 	食事			:	( レベル +1 , 体力 +2 , お金 -3 )" << endl
		 << "5 : 	ドーピング		:	( レベル +4 , お金 -5 )" << endl
		 << "0 : 	プログラムを終了します" << endl << endl;

	while(person.time>0)
	{
		cout << "->";
		cin >> choose;

		switch( choose )
		{
			case 1	:	person.Training();
						break;
			case 2	:	person.Sleep();
						break;
			case 3	:	person.Arbeit();
						break;
			case 4	:	person.Eat();
						break;
			case 5	:	person.Doping();
						break;
			case 0	:	return ;

			default :	break;
		}

		person.ShowData();
		cout << endl;

		if(person.stamina < 0)
		{
			cout << "体力がありません。¥n終了します。"  << endl;
			break;
		}
		if(person.money < 0)
		{
			cout << "お金がありません。¥n終了します。"  << endl;
			break;
		}

	}
	cout << endl <<  "記録 : レベル -> " << person.level << endl;
}

int main()
{
	Person person( 10, 0, 10, 0 );
	person.SetTime(15);
	person.ChoiceMenu();
	return 0;
}
