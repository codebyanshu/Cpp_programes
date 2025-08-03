#include <iostream>
using namespace std;
// destructor never takes any argument ant does not return any value ;
int count = 0;
class Num
{

public:
    Num(void)
    {
        count++;
        cout << "This is the time when constructor is called for obj no. " << count << endl;
    }
    ~Num(void){
        cout <<"This is the time when my distructor is called for obj no. "<<count <<endl;
        count--;
    }
};
int main()
{
    cout<<"we are in main fn "<<endl;
    cout<<"creating obj "<<endl;
    Num n1;
    {
        cout <<"Entering this block"<<endl;
        cout <<"Creating two more obj "<<endl;
        Num n2 ,n3;
        cout <<"Exiting this block"<<endl;
    }

    cout << "Back to main "<<endl;

    return 0;
}