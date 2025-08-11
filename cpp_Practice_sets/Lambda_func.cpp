/*
A lambda function is an unamed functions (anonymus function) ,you can define inline - usually for short operations,
passing to algorithms,or temproary logic
Syntax: [capture_list](param)->return_type{code...};
by default if you not return any value the not need to declear the return type you can write like this;
[capture_list](param){code...};

*/

#include <iostream>
using namespace std;
int main()
{
    // 1.capture list;
    // int a = 10;
    // int b = 20;
    // if we declear like this then here we need to define its return type and also auto key word id menditery;
    // a.) its different types of uses its totally depend on the function use.
    // auto sum = [](){
    //     int a = 10;
    //     return a;
    // };

    // b.)Here we need to call this function
    // auto sum = [](int b)
    // {
    //     int a = 10;
    //     b = 20;
    //     cout << "The value of b is :" << b << endl;
    //     return a;
    // };
    // printf("the value of a is : %d\n", a);
    // call by name and passing the arrgument
    // sum(b);
    // c.)also you can use like this
    /* []()
    {
        cout << "Hello" << endl;
    }(); */
    // d.)capturing->
    // [] => This is capturing block if its is empty the nothing captured
    /*
    name                sign

    1.capture by value (=)
    2.capture by reference(&)

    */

    /* Individual capturing by value
       auto val = [a,b](){
        return a + b;
       };
    
    cout << "The sum is " << val() << endl;*/
    // capturing all value in main function by value
   /*  auto val = [=](){
        return a + b;
    };
    cout << "The sum is " << val() <<endl; */

    // now if i can modify any value 
  /*   auto val = [=](){
        // like
        a = 37; // its give error
        return a + b;
    }; */
    // Now i can captue all value by reference and i can change it
    /* auto val = [&](){
        // like
        a = 37; // its give error
        return a + b;
    };
    cout << "The sum is " << val() <<endl;*/
    // ***********More examples*********
   /*  auto val = [a,&b](){
        // like
        // a = 12; //gives error
        b = 37;
        return a + b;
    };
    cout << "The sum is " << val() <<endl; */

    // capture all variable by value except b is taken as reference
    // auto val = [=,&b](){
    //     // like
    //     // a = 12; //gives error
    //     b = 37;
    //     return a + b;
    // };
    // cout << "The sum is " << val() <<endl;

}