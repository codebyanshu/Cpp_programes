#include <iostream>
using namespace std;
/*
-> Class template with multiple parameters(coma seperated)=>(one,two and more)

template <class t1,class t2,....>
class name{

};

*/
// template <class t1, class t2>
// class myclass
// {
// public:
//     t1 data1;
//     t2 data2;
//     myclass(t1 m, t2 m2)
//     {
//         data1 = m;
//         data2 = m2;
//     }
//     void display(void)
//     {
//         cout << this->data1 << " " << this->data2;
//     }
// };

// Template with defaulte arguments
template <class y1 = int, class y2 = float, class c1 = char>
class anshu
{
public:
    y1 a;
    y2 b;
    c1 k;
    anshu(y1 x, y2 y, c1 z)
    {
        a = x;
        b = y;
        k = z;
    }
    void display(void)
    {
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
        cout << "The value of c is :" << k << endl;
    }
};

int main()
{
    //     myclass<int, string> obj(1, "anshu");
    //     obj.display();
    anshu<> ak(4, 34.3, 'r');
    ak.display();
    cout<<endl;
    anshu<int,char,char> ak1(4, 'e', 'r');
    ak1.display();

    return 0;
}