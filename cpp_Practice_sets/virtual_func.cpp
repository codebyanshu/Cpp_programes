#include <iostream>
using namespace std;
class Base
{
public:
    int var1 = 23;
    virtual void display()
    {
        cout << "Display Base class variable " << var1 << endl;
    }
};
class Derived : public Base
{
public:
    int var_derived = 12;
    void display()
    {
        cout << "Display Base class variable " << var1 << endl;
        cout << "Display Drived class variable " << var_derived << endl;
    }
};
int main()
{
    Base *Base_pointer;
    Base obj;
    Derived Derived_obj;
    Base_pointer = &Derived_obj;
    Base_pointer->display();
    // make some changes

    return 0;
}