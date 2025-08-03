#include <iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
    void setData(int a,float b){
        id = a;
        price = b;
    }
    void getData(void){
        cout <<"The id is "<<id <<endl;
        cout <<"The price is "<<price <<endl;
    }
};

int main()
{
    int size = 2;
    int  a,b;
    shop *ptr = new shop[size];
    shop *tempPtr = ptr;
    for (int i = 0; i < size; i++)
    {
        cout <<"Enter the id and price of item "<<endl;
        cin>>a>>b;
        ptr->setData(a,b);
        ptr++;
    }
    ptr = tempPtr;

    for (int j = 0; j < size; j++)
    {
        cout << "Item number : " <<j+1<<endl;
        tempPtr->getData();
        tempPtr++;
    }
    
    

    return 0;
}