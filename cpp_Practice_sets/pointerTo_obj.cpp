#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    void getData(void)
    {
        cout << "The real part is " << real << endl;
        cout << "The real imaginary is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

class MyClass
{
public:
    // data-member
    int a;
    int value;
    int c;

    // member functions
    int display()
    {
        value = 45;
        cout << this << " " << &a;
        // *(int *)this = 95;
        // this -> value = 48;
        // cout << a <<" " << value <<endl;
        return *(int *)this;
    }
};
int main()
{
    Complex c1;
    // Complex *ptr = &c1;
    // (*ptr).setData(2,4);
    // (*ptr).getData();
    Complex *ptr = new Complex;
    ptr->setData(3, 6);
    ptr->getData();

    MyClass obb;
    obb.value = 45;

    int a = obb.display();
    // cout << a <<endl;

    return 0;
}