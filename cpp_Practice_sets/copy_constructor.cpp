#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found ,compiler supplies its own copy constructor ;
    Number(Number &obj)
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
    }
    void display(void)
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45),z2;
    z.display();
    y.display();
    x.display();

    // z1 should exactly resemble z or x or y ;
    Number z1(z); // copy constructor invoked
    z1.display();
    z2 = z; // copy constructor not called because it is already inisialised
    z2.display();

    Number z3 = z; // copy constructor called

    return 0;
}