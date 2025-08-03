#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> p1(12, "lovish");
    pair <int,string> p2;
    p2 = make_pair(89,"anshu");
    // cout << "Before swaping " << endl;
    // cout << p1.first << " " << p1.second << endl;
    // cout << p2.first << " " << p2.second << endl;

    p1.swap(p2);
    // cout << "After swaping " << endl;

    cout << boolalpha<<(p1 == p2) << endl; // it compare the data type first and then values

    auto p3 = make_pair("lovish",'K');
    // pair <int,float> p4(p1);

    pair <bool,string> p5;
    p5.first = true;
    p5.second = "anshu";

    pair <int,float> p6;

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    // cout << p3.first << " " << p3.second << endl;
    // cout << p4.first << " " << p4.second << endl;
    // cout << p5.first << " " << p5.second << endl;
    cout << p6.first << " " << p6.second << endl;

    return 0;
}