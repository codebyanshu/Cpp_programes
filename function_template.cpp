#include <iostream>
using namespace std;

// float func(int a,int b){
//     float avg = (a+b)/2;
//     return avg;
// }
// float func2(int a,float b){
//     float avg = (a+b)/2;
//     return avg;
// }

// using function template
// template <class t1,class t2>
// float func(t1 a,t2 b){
//     float avg = (a+b)/2;
//     return avg;
// }

// 2.Example 

// template <class t>
// void swapp(t &a, t &b)
// {
//     t temp = a;
//     a = b;
//     b = temp;
// }

// 3.Example
template <class v>
class anshu{
    public:
    v val;
    anshu(v a){
        val = a;
    }
    void display();
};

template <class v>
void anshu<v> :: display(){
    cout <<"The value is : "<<val;
}
void temp(int a){
cout << "hii i am first : " <<a;
}

template <class ta>
void temp(ta a){
cout << "This is templatised func : " <<a;
}
template <class ta>
void temp1(ta a){
cout << "This is templatised func : " <<a;
}
int main()
{
    // float a;
    // a = func(4.5,9.7);
    // printf("The average of the function is %.3f ",a);
    // cout<<a;
    // int x = 5, y = 7;
    // swapp(x, y);
    // cout << x << " " << y;

    anshu<int> ak(45);
    ak.display();

    cout <<endl;
    temp(65);//Exact match takes the higest priority
    
    cout <<endl;
    temp1(98);

    return 0;
}