#include <iostream>
using namespace std;
// base class
class Employe
{
public:
    int id;
    float salary;
    Employe() {}
    Employe(int idg)
    {
        id = idg;
        salary = 34.21;
    }
};

/* Drivied class syntax
class {{derived class-name}} : {{visibility-mode}} {{base class name}}
{
 --- some functions
} */

/* Note:
1.Default visibility mode is private
2.Private visibility mode : public members of the base class is bocome the private memmbers in derived class
3.Public visibility : public members of the base class is bocome the public memmbers in derived class
3.Private members cannote be inherited
*/
class programer : public Employe
{
int langugecode ;
public : programer(int getid)
    {
        id = getid;
        langugecode = 9;
    }
    void getData(void)
    {
        cout << id << endl;
        cout << langugecode << endl;
    }
};

int main()
{
    Employe anshu(2), maini(43);
    cout << anshu.salary << endl;
    cout << maini.salary << endl;
    programer shail(23);
    // shail.id; // gives error becaue inharited privatly
    shail.id;
    shail.getData();

    return 0;
}