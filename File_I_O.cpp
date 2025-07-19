#include <iostream>
#include <fstream>
/*
The usful class for working with files in cpp are :
1. fstreambase
2.ifstream --> derived from 1
3.ofstream --> derived from 1
*/

/*
There are two way to open a file
1.using a constructor
2.using a member function open() of the class.
*/
using namespace std;
int main()
{
    //     string st = "anshu kumar";
    //     // Opening a file using constructor and writing it
    //     // ofstream out("sample.txt");
    //     // out<< st;
    // string st2;
    //     ifstream red("sample.txt");
    //     getline(red ,st2);
    //     // red >>st2;
    //     cout <<st2;

    // Using object;
    ofstream out;
    out.open("sample.txt");
    out << "This is me\n";
    out << "This is me\n";
    out << "This is me\n";
    out << "This is me";
    out.close();

    ifstream in;
    in.open("sample.txt");
    string st, st2;
    // in >> st >> st2;
    // cout << st <<" " << st2;
    while (in.eof()== 0)
    {
        getline(in,st);
        cout << st <<endl;
    }
    
    in.close();

    return 0;
}