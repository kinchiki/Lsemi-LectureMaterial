#include "Account.h"
#include <iostream>

int main()
{
    using namespace std;

    int isum = 0 ; // 収入の合計値を入力する変数
    int esum = 0 ; // 出費の合計値を格納する変数

    const int AL = 10; //ArrayLength
    inAccount in[AL] ; // クラスの配列の作成
    exAccount ex[AL] ;

    cout << "収入を入力します" << endl ;
    cout << endl ;

//    int x = 0 ; // フラグの役割である変数
    bool flag = true;
    while(flag){ // フラグが 1 になるまで実行
           string str = "" ; // 一時的に名前を受け取る変数
           int income = 0 ; // 一時的に収入額を受け取る変数

           cout << "収入の名前を入力 : " ;
           cin >> str ;

           int i = 0 ; // カウンターの役割を果たす変数
           in[i].setiName( str ) ;

           cout << "収入の金額を入力 : " ;
           cin >> income ;

           in[i].setAmount( income ) ;

           isum += in[i].getAmount() ; // 継承したため使用可能、合計値の計算
           ++ i ;

           if( i >= AL ){ // 用意した配列の要素数よりも大きくなったら抜ける
               break ;
           }

           cout << endl ;
           cout << "収入の入力を終了しますか?" << endl ;
           cout << "終了する場合は 0 、入力を続行する場合は 1 を入力" << endl ;
           cout << "入力 : " ;
           cin >> flag ;

           cout << endl ;
    }


//    i = 0 ; // カウンターの初期化
    flag = true ; // フラグを元に戻す

    cout << "出費を入力します" << endl ;
    cout << endl ;

    while(flag){
           string str = "" ;
           int expenses = 0 ;

           cout << "出費の名前を入力 : " ;
           cin >> str ;

           int i = 0 ; // カウンターの役割を果たす変数
           ex[i].seteName( str ) ;

           cout << "出費の金額を入力 : " ;
           cin >> expenses ;

           ex[i].setAmount( expenses ) ;

           esum += ex[i].getAmount() ;
           ++ i ;

           if( i >= AL ){
               break ;
           }

           cout << endl ;
           cout << "出費の入力を終了しますか?" << endl ;
           cout << "終了する場合は 0 、入力を続行する場合は 1 を入力" << endl ;
           cout << "入力 : " ;
           cin >> flag ;

           cout << endl ;
    }


    cout << "収入の一覧" << endl ;

    for( int i = 0 ; i < AL ; ++ i ){ // ループを用いて表示
         in[i].showAccount() ;
    }

    cout << "合計 : " << isum << endl ;
    cout << endl ;

    cout << "出費の一覧" << endl ;

    for( int i = 0 ; i < AL ; ++ i ){
         ex[i].showAccount() ;
    }

    cout << "合計 : " << esum << endl ;
    cout << endl ;

    int result = 0 ; // 合計値同士の計算で使用
    if( ( result = isum - esum ) < 0 ){ // 赤字または黒字かを判断
          cout << "今月は " << result << "円 赤字です" << endl ;
    } else {
          cout << "今月は" << result << "円 黒字です" << endl ;
    }

    getchar() ;

    return 0 ;
}
