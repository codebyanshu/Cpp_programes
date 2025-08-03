#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base::getData1(void)
{
    return data1;
}
int Base::getData2(void)
{
    return data2;
}

class Derived : private/* public */ Base //In case private
{

    int data3;

public:
    void process(void);
    void display(void);
};
void Derived ::process(void)
{
    setData(); // so that we call it here to set the data
    data3 = data2 * getData1();
}

void Derived ::display(void)
{
    cout << "Value of data1 is " << getData1() << endl;
    cout << "Value of data2 is " << data2 << endl;
    cout << "Value of data3 is " << data3 << endl;
}

int main()
{

    Derived ak;
    // ak.setData(); //we cannot use this now
    ak.process();
    ak.display();

    return 0;
}