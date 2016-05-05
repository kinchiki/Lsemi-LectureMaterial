#include "Calculator.h"
#include <iostream>
using namespace std;

//継続処理
bool ContinueProcess(){
	string input;
	cout << "続けますか？ はい→[y],いいえ→[n]:" << flush;
	cin >> input;

	if (input == "y") return true;
	else return false;
}

int main(){
	Calculator calc;	//計算機オブジェクト生成
	int a,b;	//数値格納変数
	string ope[2];	//演算子格納変数
	bool flag = true;	//継続するか判定する変数

	//終了するまでループ
	while (flag){
		cout << "数値1を入力：" << flush;
		cin >> a;
		cout << "演算子を入力：" << flush;
		cin >> ope[0];

		if (ope[0] != "=")
		{
			cout << "数値2を入力：" << flush;
			cin >> b;
			cout << "演算子を入力：" << flush;
			cin >> ope[1];

			//入力した値をvalue1,2にセット
			calc.SetValue1(a);
			calc.SetValue2(b);

			/*数値1の後に入力した演算子の計算を行う
			計算結果をメンバ変数ansとvalue1に代入する*/
			calc.Calc(ope[0]);

			/*数値2の後に入力した演算子が"="でなかった場合
			"="が入力されるまで計算を行う*/
			if (ope[1] != "=")
			{
				for (int i = 3; ope[1] != "=";i++)
				{
					cout << "数値" << i << "を入力：" << flush;
					cin >> b;

					/*value1には前の計算結果が格納されてるので
					value2に入力した値を格納する*/
					calc.SetValue2(b);
					calc.Calc(ope[1]);

					cout << "演算子を入力：" << flush;
					cin >> ope[1];
				}
				//答えの表示
				cout << "Answer:" << calc.GetAns() << endl;
				flag = ContinueProcess();
			}
			else
			{
				//答えの表示
				cout << "Answer:" << calc.GetAns() << endl;
				flag = ContinueProcess();
			}
		}
		else
		{
			//最初に入力したaを表示
			cout << "Answer:" << a << endl;
			flag = ContinueProcess();
		}
	}
	cout << "終了します" << endl;
	getchar();	//停止処理
	return 0;
}
