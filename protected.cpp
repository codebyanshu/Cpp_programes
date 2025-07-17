#include <iostream>
using namespace std;
class Base
{
protected: // protected is just like private but we can inherit
    int a;

private:
    int b;
};
class Derived :protected Base
{

};

int main()
{
    Base b;
    Derived a;
    // cout << b.a; //we cannot use it because it is protected
    // cout << d.a; // we cannot use ,since it is protected in both base as well as derived
    

    return 0;
}