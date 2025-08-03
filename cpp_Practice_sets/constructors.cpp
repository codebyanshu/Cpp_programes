#include <iostream>
using namespace std;

class complex{

    int a,b;
    public :
    // creating a constructor
    //  constructor is a special member function with same name as of the 
    //class it is used to initialize the objectes of its class
    // It is automatically invoked
    complex(void);
    void printNumber(void){
        cout << "The number is " << a <<" + " <<b <<"i" <<endl;
    }
};
complex :: complex(void){ //this is a default constructor
    a = 0;
    b = 0;
}
int main()
{
    complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    

    return 0;
}