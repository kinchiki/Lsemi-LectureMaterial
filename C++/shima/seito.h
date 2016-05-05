#ifndef _SAMPLE_20151014
#define _SAMPLE_20151014

#include <string>

class seito
{
//メンバ変数はprivateに！
private:
    std::string number;//学籍番号
    std::string name;//名前
    int knti;//体調

//セッター、ゲッター、コンストラクタを作ろう
public:
    //constに！
    void ShowData() const;
};

#endif //_SAMPLE_20151014
