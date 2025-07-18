#include <iostream>
using namespace std;
class A
{
    int a;

public:
    // void setData(int a)
    // {
    //     this->a = a;
    // }
    A & setData(int a)
    {
        this->a = a;
        return *this;
    }
    void getdata(void)
    {
        cout << "The value of adderes of a is " << &a << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of adderes of this is " << this << endl;
    }
};
int main()
{
    // this is a keyword which is a pointer which points to the objectes which invokes the member function.
    A a;
    a.setData(4);
    a.setData(4).getdata();
    // a.getdata();

    return 0;
}