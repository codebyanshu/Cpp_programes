#include <iostream>
using namespace std;

class shop
{

    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void getPrice(void);
    void displayPrice(void);
};

void shop ::getPrice(void)
{
    cout << "Enter the ID of your item no. " <<counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with ID " << itemId[i] << " is " << itemPrice[i] <<endl;
    }
    

}

int main()
{
    shop ak;
    ak.initCounter();
    ak.getPrice();
    ak.getPrice();
    ak.getPrice();
    ak.displayPrice();

    return 0;
}