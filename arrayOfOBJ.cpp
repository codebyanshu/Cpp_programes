#include <iostream>
using namespace std;
class Employe
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 222;
        cout << "Enter the id of employee : ";
        cin >> id;
    }
    void getId(void){
        cout <<"The id of employe is " << id <<endl;
    }
};

int main()
{
    // Employe anshu,lovish,mani,divya;
    // anshu.setId();
    // anshu.getId();

    Employe fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[0].setId();
        fb[0].getId();
    }
    

    return 0;
}