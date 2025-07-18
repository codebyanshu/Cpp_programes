// #include <iostream>
// using namespace std;
// /*
// Case 1.
// class B : public A{
// order of exucution of constructor -> first A() then B().
// };
// Case 2.
// class A: public B,public C{
// order of execution of constructor is B() then C() and A().
// };
// Case 3.
// class A : public B,virtual public A{
// order of execution of constructor -> A() then B() and A().
// }
// } */
// class Base1
// {
//     int data1;

// public:
//     Base1(int i)
//     {
//         data1 = i;
//         cout << "Base1 class constructor called " << endl;
//     }
//     void printData_base1(void)
//     {
//         cout << "The value of data1 is : " << data1 << endl;
//     }
// };
// class Base2
// {

//     int data2;

// public:
//     Base2(int i)
//     {
//         data2 = i;
//         cout << "Base2 class constructor called " << endl;
//     }
//     void printData_base2(void)
//     {
//         cout << "The value of data2 is : " << data2 << endl;
//     }
// };

// class Derived : public Base2, public Base1
// {
//     int derived1, derived2;

// public:
//     Derived(int a, int b, int c, int d) : Base2(b), Base1(a)
//     {
//         derived1 = c;
//         derived2 = d;
//         cout << "Derived class constructor called" << endl;
//     }
//     void printData(void)
//     {
//         cout << "The value of derived1 is : " << derived1 << endl;
//         cout << "The value of derived2 is : " << derived2 << endl;
//     }
// };
// int main()
// {
//     Derived ak(1, 23, 4, 6);
//     ak.printData_base1();
//     ak.printData_base2();
//     ak.printData();

//     return 0;
// }

// Initialization list

/*
Syntax for initialization list in constructor :
constructor (argument-list) : initialization-section{
Body of constructor
assignmrnt + oter code;
}
*/
#include <iostream>
using namespace std;
class test
{
    int b; // solution
    int a;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i+j)
    // test(int i, int j) : a(i), b(2*j)
    // test(int i, int j) : a(i), b(a+j)
    // test(int i, int j) : b(j),a(i+b) //This will create problem because a will be initialized first because a is written first ;
    test(int i, int j) : a(i)
    {
        b = j;
        cout << "Constructor Executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    test t(4, 6);

    return 0;
}