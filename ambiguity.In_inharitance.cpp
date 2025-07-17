#include <iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"how are you ?"<<endl;
    }
    
};
class Base2{
    public:
    
    void greet(){
        cout<<"Kaise ho ? "<<endl;
    }
};
class derived : public Base1 ,public Base2{
    int a;
    public:
    void greet(){
        Base1::greet(); //ambiguity resolution
    }

};
class B{
    public:
    void say(){
        cout <<"hello World "<<endl;
    }
};
class D : public B{
    public:
    // D's method say() will override base class's say() method
    // void say(){
    //     cout<<"ye duniya pital di ";
    // }
};
int main()
{
    Base1 base1obj;
    Base2 base2obj;
    derived d;
    base1obj.greet();
    base2obj.greet();
    d.greet();

    B b;
    b.say();
    D di;
    di.say();
    

    return 0;
}