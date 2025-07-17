#include <iostream>
using namespace std;
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// using pointers
// void swap(int* a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// using reference variable
// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// changing the variable
int & swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int a = 7, b = 3;
    // call by value
    swap(a, b);
    cout << "the swap number is : " << a << " " << b << endl;
    // call by reference using pointers
    // swap(&a, &b);
    // cout << "the swap number is : " << a << " " << b << endl;
    // call by reference using reference variable
    // swap(a, b);
    // cout << "the swap number is : " << a << " " << b << endl;
    // changing the variable using reference
    swap(a, b) = 23;
    cout << "the swap number is : " << a << " " << b << endl;
    return 0;
}