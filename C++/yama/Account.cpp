#include "Account.h"
#include <iostream>
using std::cout; using std::endl; using std::string;

Account::Account(){ amount = 0 ; }

void Account::setAmount( int a ){ amount = a ; }

int Account::getAmount() const { return amount ; }


exAccount::exAccount(){ ename = "入力なし" ; }

void exAccount::seteName( string s ){ ename = s ; }

string exAccount::geteName() const { return ename ; }

void exAccount::showAccount() const
{
    cout << ename << " : " << amount << endl ;
}


inAccount::inAccount(){ iname = "入力なし" ; }

void inAccount::setiName( string s ){ iname = s ; }

string inAccount::getiName() const { return iname ; }

void inAccount::showAccount() const
{
    cout << iname << " : " << amount << endl ;
}
