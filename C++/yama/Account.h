#ifndef _SAMPLE_20151014
#define _SAMPLE_20151014

#include <string>

//純粋仮想関数を持つクラスは抽象クラスになりインスタンス化できない
class Account
{
protected :
    int amount ; // 金額
    //int amount[10];
    //int sum;

public :
    Account() ; // デフォルトコンストラクタ
    void setAmount( int a ) ; // セッター
    int getAmount() const ; // ゲッター
     //純粋仮想関数 constにすべき
    virtual void showAccount() const = 0;

} ;


class exAccount : public Account // Accout クラスを継承した exAccount クラス
{
private :
    std::string ename ; // 出費の名前

public :
    exAccount() ; // デフォルトコンストラクタ
    void seteName( std::string s ) ;
    std::string geteName() const ;
    void showAccount() const ; // 名前と金額を出力するメソッド

} ;


class inAccount : public Account // Accout クラスを継承した inAccount クラス
{
private :
   std::string iname ; // 収入の名前

public :
    inAccount() ;
    void setiName( std::string s ) ;
    std::string getiName() const ;
    void showAccount() const ;

} ;

#endif
