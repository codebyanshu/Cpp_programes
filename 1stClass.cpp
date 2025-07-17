#include <iostream>
using namespace std;
class Employe
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employe ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employe anshu;
    anshu.d = 23;
    anshu.e = 98;
    // anshu.a = 23; // it cannot access by main becaue it is private it can only access by its class member or functions
    anshu.setData(2,3,4);
    anshu.getData();

    return 0;
}