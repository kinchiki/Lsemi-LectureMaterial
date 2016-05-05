#ifndef _SAMPLE_20151014
#define _SAMPLE_20151014

#include <string>
using std::string;

class Human {
protected:
    int age;//年齢
    double weight;//体重
    double tall;//身長
    string name;//名前
    string sex;//性別
public:
//記法 キャメルケース、スネークケース、パスカルケースは統一！
    Human(int a, double w, double t, string n, string s);
    void showStatus()const;
    void StandUp()const;
    void Toukou()const;
    void Study()const;
    void Kitaku()const;
    void Neru()const;

    void setAge(int a);
    void setWeight(double w);
    void setTall(double t);
    void setName(string n);
    void setKind(string s);

    int getAge() const;
    double getWeight()const;
    double getTall()const;
    string getName()const;
    string getSex()const;
};

#endif //_SAMPLE_20151014
