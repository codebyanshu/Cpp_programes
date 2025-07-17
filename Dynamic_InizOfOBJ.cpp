#include <iostream>
using namespace std;

class Bank
{
    int principal;
    int years;
    float intrestRate;
    float returnValue;

public:
    Bank() {} // we need this because compiler needs a defaulte constructor
    // as the inialization of obj;
    Bank(int p, int y, float r); // r can be a value like 1.02
    Bank(int p, int y, int r);   // r can be a value like 12
    void show(void);
};

Bank ::Bank(int p, int y, float r)
{
    principal = p;
    years = y;
    intrestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
    
}
Bank ::Bank(int p, int y, int r)
{
    principal = p;
    years = y;
    intrestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}
void Bank :: show(void)
{
    cout << "Principal Amount was " << principal << " " 
    << " Return value after " 
    << years
    << " year is " << returnValue << endl;
}
int main()
{
    Bank b1,b2,b3;
    int p ,y;
    float r;
    int R;
    cout << "Enter the value of p y and r" <<endl;
    cin>>p>>y>>r;
    b1 = Bank(p,y,r);
    b1.show();
    cout << "Enter the value of p y and r" <<endl;
    cin>>p>>y>>R;
    b2 = Bank(p,y,R);
    b2.show();

    return 0;
}