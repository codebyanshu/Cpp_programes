#include <iostream>
using namespace std;
inline int product(int a,int b){
    // not recomended to use below lines with inline functions,
    // static int c = 0; //this executes only once
    // c++; // Next time this func is run, the value of c will be retained
    return a*b;
}

float moneyreceved (int curentmoney,float intrest = 1.01){
return curentmoney*intrest;
}
int main(){
    // int a, b;
    // cout << "enter the number of a and b : " << endl;
    // cin >> a >> b ;
    // cout<< "the value of a and b is :" << product(a,b)<< endl;

    // actule working bhinde
    // cout<< "the value of a and b is :" << return a*b << endl; // repet this code for understand
    // then it execute all the main use is that if your code is less then use inline func its fast other wise not.

    // note : dont use inline function in recurcive func.
    int money;
    cout << "Enter the amount of your money"<< endl;
    cin >> money;
    cout << "if you have money " << money << " in your bank account,you will recive " << moneyreceved(money);




}