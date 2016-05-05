#include<iostream>
#include<string>

using namespace std;

class seito
{
public:
	string number;//学籍番号
	string name;//名前
	int knti;//体調
	void ShowData();

};
void seito::ShowData()//kntiに入った数字に合わせて体調状態を出力。
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

 main()
{
	seito s;

	cout << "名前を入力: "<<endl;
		cin >> s.name;
	cout << "学籍番号を入力: "<<endl;
		cin >> s.number;
	cout << "体調を入力:"<<endl;//(0,1,2の三段階で通常、体調不良、危険を表示)
		cin >> s.knti;

	s.ShowData();//void seito::ShowData()へ


	return 0;
}
