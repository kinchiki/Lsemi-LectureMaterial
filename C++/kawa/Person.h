#ifndef SAMPLE_PERSON_20151015
#define SAMPLE_PERSON_20151015

class Person
{
    private:
        int time;               //時間
        int money;              //お金
        int stamina;            //体力
        int level;              //レベル

        void Arbeit();          //
        void Sleep();           //
        void Eat();             //      レベリング選択肢
        void Training();        //
        void Doping();          //
        void ShowData() const;  //現在データの参照

    public:
        Person( int t, int m, int s, int l );       //宣言 + 初期化
        void ChoiceMenu();      //メニューから選択肢を選択
        void SetTime(int x);    //時間の上書き

};

#endif
