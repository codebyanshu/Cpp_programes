#include <iostream>
using namespace std;
class Base
{
public:
    int var1 = 23;
    void display()
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
    // Base_pointer->display();
    Base_pointer->var1 = 89;
    // Base_pointer->var_derived = 39; // it throws an error
    Base_pointer->display();

    Derived * Derived_pointer;
    Derived_pointer = &Derived_obj;
    Derived_pointer->var_derived = 78;
    Derived_pointer->display();


    return 0;
}