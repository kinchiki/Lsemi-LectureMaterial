#ifndef _SAMPLE_20151014
#define _SAMPLE_20151014

#include <string>

//計算機クラス
class Calculator{
private:
	int value1,value2;	//入力した数値を格納
	int ans;	//答えを格納

// private でいい
	int Addition();
	int Substraction();
	int Multiplication();
	int Division();

public:
	//コンストラクタ
	Calculator();
	//セッター
	void SetValue1(int a);
	void SetValue2(int b);
	//ゲッター
	int GetAns() const;
	//計算機メソッド
	//const引数の方がいいね
	void Calc(const std::string& ope);		//読み込んだ演算子から計算方法を選択する関数
};

#endif //_SAMPLE_20151014
