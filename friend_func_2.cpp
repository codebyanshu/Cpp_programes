#include <iostream>
using namespace std;
// forward declaration ;
class complex;
class calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumComplex(complex, complex);
    int sumCompComplex(complex, complex);
};
class complex
{

    int a, b;

    // Individually declaring function as a friends
    // friend int calculator ::sumComplex(complex o1, complex o2);
    // friend int calculator ::sumCompComplex(complex o1, complex o2);

    // Alternative :- Declare entire calculator class as friend
    friend class calculator;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printData()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::sumComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

main()
{
    complex c1, c2;
    c1.setData(2, 5);
    c1.printData();

    c2.setData(4, 8);
    c2.printData();

    calculator cal;
    int result = cal.sumComplex(c1, c2);

    cout << "The sum of real part of c1 and c2 is " << result << endl;
    int resultcomp = cal.sumCompComplex(c1, c2);

    cout << "The sum of real part of c1 and c2 is " << resultcomp << endl;

    return 0;
}
