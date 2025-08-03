#include <iostream>
using namespace std;
int main()
{
    // new keyword/operator
    // int *ptr = new int(4);

    int *i = new int;
    float *s = new float;
    char *c = new char;
    int *k = new int[40]; // 39
    char *l = new char[10];
    *l = 'l';
    *(l + 1) = 'b';
    cout << l;

    *i = 456;

    delete[] k;
    delete k;
    // cout << i << endl ;

    // *k = 4;
    // *(k+1) = 5;
    // cout << *k << " " << *(k+1) << endl;
    // cout << (int )k << " " << (int )(k+1) << endl;

    delete i;

    float *ptr = new float(40.78);
    cout << "The value at adderess p is " << *ptr << endl;
    int *arr = new int[4];
    arr[0] = 1;
    arr[1] = 5;
    arr[2] = 2;
    arr[3] = 4;
    delete[] arr;

    cout << "The value at arr[0] " << arr[0] << endl;
    cout << "The value at arr[1] " << arr[1] << endl;
    cout << "The value at arr[2] " << arr[2] << endl;
    cout << "The value at arr[3] " << arr[3] << endl;

    return 0;
}