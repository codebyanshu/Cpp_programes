#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // cout << "this is a general code written by " << name ;
    // int sum = 0,n;
    // cout << "enter the number till the sum of odd number you find : " ;
    // cin>>n;
    // for (int i = 0; i <= n; i++)
    // {
    //     if (i%2!=0)
    //     {
    //         sum += i;
    //     }

    // }
    // cout << "The sum is : " << sum ;

    // ex.2

    // int a[] = {1,3,4,6,7};
    // for (int b : a) // also better to use auto always (auto b)
    // {
    //     cout << "num :" << b <<endl;
    // }
    // method 2.
    // for (int b : {1, 3, 4, 6, 7}) // also better to use auto always (auto b)
    // {
    //     cout << "num :" << b <<endl;
    // }
    // in vectors

    // vector<int> num = {1, 2, 3, 4};
    // for (int n : num)
    // {
    //     cout << "num :" << n << endl;
    // }
// in strings
    // string name = "anshu";
    // for (char n : name)
    // {
    //     cout << n;
    // }
// method 2
    
    for (char n : "anshu kumar")
    {
        cout << n;
    }

    return 0;
}