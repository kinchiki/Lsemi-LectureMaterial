#ifndef _SAMPLE_20151014
#define _SAMPLE_20151014

class Car{
    protected:
    int mileage;//距離
    int fuel;//ガソリン

public:
    void goForward();
    void turnLeft();
    void turnRight();
    void refue();
    //constメンバ関数にしよう！
    int getMileage() const;
    int getFuel() const;
    Car();
    Car(int m,int f);
};

#endif
