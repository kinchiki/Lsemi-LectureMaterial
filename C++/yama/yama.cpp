#include <iostream>
#include <string>

using namespace std ;

class Account
{
protected :
    int amount ; // 金額 
    
public :
    Account() ; // デフォルトコンストラクタ
    void setAmount( int a ) ; // セッター
    int getAmount() const ; // ゲッター
    
} ;

Account::Account(){ amount = 0 ; }

void Account::setAmount( int a ){ amount = a ; }

int Account::getAmount() const { return amount ; }

class exAccount : public Account // Accout クラスを継承した exAccount クラス
{
private : 
    string ename ; // 出費の名前
    
public : 
    exAccount() ; // デフォルトコンストラクタ
    void seteName( string s ) ;
    string geteName() const ;
    void showexAccount() ; // 名前と金額を出力するメソッド
} ;

exAccount::exAccount(){ ename = "入力なし" ; }

void exAccount::seteName( string s ){ ename = s ; }

string exAccount::geteName() const { return ename ; }

void exAccount::showexAccount()
{
    cout << ename << " : " << amount << endl ;
}

class inAccount : public Account // Accout クラスを継承した inAccount クラス
{
private : 
    string iname ; // 収入の名前
    
public : 
    inAccount() ;
    void setiName( string s ) ;
    string getiName() const ;
    void showinAccount() ;
    
} ;

inAccount::inAccount(){ iname = "入力なし" ; }

void inAccount::setiName( string s ){ iname = s ; }

string inAccount::getiName() const { return iname ; }

void inAccount::showinAccount()
{
    cout << iname << " : " << amount << endl ;
}

int main()
{
    int isum = 0 ; // 収入の合計値を入力する変数
    int esum = 0 ; // 出費の合計値を格納する変数
    int x = 0 ; // フラグの役割である変数
    int i = 0 ; // カウンターの役割を果たす変数
    int result = 0 ; // 合計値同士の計算で使用
    
    inAccount in[10] ; // クラスの配列の作成
    exAccount ex[10] ;
    
    cout << "収入を入力します" << endl ;
    cout << endl ;
    
    while( x == 0 ){ // フラグが 1 になるまで実行
           string str = "" ; // 一時的に名前を受け取る変数
           int income = 0 ; // 一時的に収入額を受け取る変数
           
           cout << "収入の名前を入力 : " ;
           cin >> str ;
           
           in[i].setiName( str ) ;
           
           cout << "収入の金額を入力 : " ;
           cin >> income ;
           
           in[i].setAmount( income ) ;
           
           isum += in[i].getAmount() ; // 継承したため使用可能、合計値の計算
           ++ i ;
           
           if( i == 10 ){ // 用意した配列の要素数よりも大きくなったら抜ける
               break ;
           }
           
           cout << endl ;
           cout << "収入の入力を終了しますか?" << endl ;
           cout << "終了する場合は 1 、入力を続行する場合は 0 を入力" << endl ;
           cout << "入力 : " ;
           cin >> x ;
           
           cout << endl ;
    }
    
    i = 0 ; // カウンターの初期化
    x = 0 ; // フラグを元に戻す
    
    cout << "出費を入力します" << endl ;
    cout << endl ;
    
    while( x == 0 ){
           string str = "" ;
           int expenses = 0 ;
           
           cout << "出費の名前を入力 : " ;
           cin >> str ;
           
           ex[i].seteName( str ) ;
           
           cout << "出費の金額を入力 : " ;
           cin >> expenses ;
           
           ex[i].setAmount( expenses ) ;
           
           esum += ex[i].getAmount() ;
           ++ i ;
           
           if( i == 10 ){
               break ;
           }
           
           cout << endl ;
           cout << "出費の入力を終了しますか?" << endl ;
           cout << "終了する場合は 1 、入力を続行する場合は 0 を入力" << endl ;
           cout << "入力 : " ;
           cin >> x ;
           
           cout << endl ;
    }
    
    cout << "収入の一覧" << endl ;
    
    for( i = 0 ; i < 10 ; ++ i ){ // ループを用いて表示
         in[i].showinAccount() ;
    }
    
    cout << "合計 : " << isum << endl ;
    cout << endl ;
    
    cout << "出費の一覧" << endl ;
    
    for( i = 0 ; i < 10 ; ++ i ){
         ex[i].showexAccount() ;
    }
    
    cout << "合計 : " << esum << endl ;
    cout << endl ;
    
    if( ( result = isum - esum ) < 0 ){ // 赤字または黒字かを判断
          cout << "今月は " << result << "円 赤字です" << endl ;
    } else {
          cout << "今月は" << result << "円 黒字です" << endl ;
    }
    
    getchar() ;
    
    return 0 ;
}
