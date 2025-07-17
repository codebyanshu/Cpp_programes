#include <iostream>
using namespace std;
// Nesting of member functions
class binary
{
    string s;
    void check_bin(void);

public:
    void read(void);
    void once_copliment(void);
    void Display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number : ";
    cin >> s;
}

void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}

void binary ::once_copliment(void)
{
    check_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
        
    }
}
void binary :: Display(void){
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i) ;
    } 
}

int main()
{
    binary b;
    b.read();
    // b.check_bin(); //it will throw an error ;
    b.once_copliment();
    b.Display();

    return 0;
}