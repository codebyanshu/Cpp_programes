#include <iostream>
using namespace std;
/* syntax:
class derived : visibility-mode bass-classname_1 , visibility-mode bass-class_name_2{
class body ;
};
 */
class bass1
{
protected:
    int bass1int;

public:
    void setBass1int(int a)
    {
        bass1int = a;
    }
};
class bass2
{
protected:
    int bass2int;

public:
    void setBass2int(int a)
    {
        bass2int = a;
    }
};

class derivied : public bass1, public bass2
{
public:
    void show(void)
    {
        cout << "The value of bass1 is " << bass1int << endl;
        cout << "The value of bass2 is " << bass2int << endl;
        cout << "The sum of two value is " << bass1int + bass2int << endl;
    }
};
int main()
{
    derivied ak;
    ak.setBass1int(34);
    ak.setBass2int(56);
    ak.show();

    return 0;
}