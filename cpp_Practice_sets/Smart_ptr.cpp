/* - Resource Management
- Avoidmy Memory leaks
- Avoidmy Dangling pointers Pointer ownership
- Simplify memory management Avoiding manual memory management errors. */

#include <iostream>
#include <memory>
using namespace std;

/*
A unique_ptr is a container for a raw pointer.
Unique ptr explicitly prevents copying move() function of its contained pointer, but can be used to transfer ownership of the Contained pointer to another unique_pr

Syntax :  unique_ptr<data_type> ptr_name;
*/

// Problem
/* int f1()
{
    int *p = new int(10);
    if (*p == 10){
        return *p;
    }
    // If condition is true then p does not gona be deleteand memory leaks occurs
    delete p;
} */
int f1()
{
    // unique ptr is a class of type int/others too and p is an object then ()->is a constructor called
    // says make a pointer and store value 10
    unique_ptr<int> p(new int(10));
    // OR
    // unique_ptr<int> P;
    // P.reset(new int(10)); //use this function
    // *p = 19; => this gona note work
    // p is already holds a pointer to an existing object, this object is deleted first and then the new pointer stored.

    if (*p == 10)
    {
        return *p;
    }
    // no need to delete the p;
    // when func and inside its variables is destroed then the destructor is called and delete pointer p by itself
}

void f2()
{
    unique_ptr<int> p1(new int(10));
    unique_ptr<int> p2;
    cout << *p1 <<endl;
    // Transfere of owership
    p2 = move(p1);
    if (p1 == nullptr)
        cout << "p1 is not an owner \n";
    else
        cout << *p1;
    cout << *p2;
}
int main()
{
f2();
    return 0;
}