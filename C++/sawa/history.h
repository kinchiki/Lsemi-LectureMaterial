#ifndef _SAMPLE_20151014
#define _SAMPLE_20151014

#include <string>

/*
class history
{
public:
    int person; //何人目
    char zidai[30];//活躍した時代
    char name[80];//名前
    char action[100];//やったこと
    void ShowData();//データの出力
};
*/

class History {
private:
    int id;
    std::string zidai;//活躍した時代
    std::string name;//名前
    std::string action;//やったこと

public:
    void ShowData() const;//データの出力
    History();
    History(int i, std::string z, std::string n, std::string a);
};


#endif
