#include <iostream>
using namespace std;

class Y;
class X
{
    int data;

public:
    void setValue(int val)
    {
        data = val;
    }
    friend void add(X,Y);
};

class Y
{
    int num;

public:
    void setValue(int val)
    {
        num = val;
    }
    friend void add(X,Y);
};

void add(X o1, Y o2)
{
    cout << "Summing data of X and Y objects gives me " << o1.data + o2.num << endl;
}

int main()
{
    X a;
    a.setValue(4);

    Y b;
    b.setValue(8);

    add(a,b);


    return 0;
}