#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int);
    void printNumber(void)
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(int x, int y) // parameterized constructor
{
    a = x;
    b = y;
}
int main()
{
    // Imlicit call
    complex c1(4, 2);
    c1.printNumber();

    // Explicit call
    complex b = complex(7, 9);
    b.printNumber();

    return 0;
}