#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
complex(void){
    a = 0;
    b = 0;
}
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void printData(void)
    {
        cout << "the number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1(2, 5);
    complex c2(6);
    complex c3;
    c3.printData();
    c2.printData();
    c1.printData();

    return 0;
}