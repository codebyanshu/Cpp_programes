#include <iostream>
using namespace std;
class Employe
{
    int id;
    static int count ;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of the employe is " << id << " and this employe no. " << count <<endl;
    }
    static void getCount(void){
        cout << "The value of count is "<< count << endl;
        // cout << id; // it throws an error
    }
};
int Employe :: count ; // Default value is 0 ;
int main()
{
    Employe anshu,lovish,mani;
    // count is the static data member
    // anshu.id = 1; // cannot do this

    anshu.setData();
    anshu.getData();
    Employe :: getCount();

    lovish.setData();
    lovish.getData();
    Employe :: getCount();
    
    mani.setData();
    mani.getData();
    Employe :: getCount();

    return 0;
}