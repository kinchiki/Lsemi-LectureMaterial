#include "Calculator.h"

//コンストラクタ
Calculator::Calculator() : value1(0),value2(0) {
}

int Calculator::GetAns() const {
	return ans;
};

//const引数で
void Calculator::Calc(const string& ope)
{
	if(ope == "+"){
		ans = Addition();
	}else if(ope == "-"){
		ans = Substraction();
	}else if(ope == "*"){
		ans = Multiplication();
	}else if(ope == "/"){
		ans = Division();
	}
}

//セッター
void Calculator::SetValue1(int a)
{
	value1 = a;
}
void Calculator::SetValue2(int b)
{
	value2 = b;
}

//計算機メソッド
int Calculator::Addition()
{
	value1 = value1 + value2;
	return value1;
}
int Calculator::Substraction()
{
	value1 = value1 - value2;
	return value1;
}
int Calculator::Multiplication()
{
	value1 = value1 * value2;
	return value1;
}
int Calculator::Division()
{
	value1 = value1 / value2;
	return value1;
}
