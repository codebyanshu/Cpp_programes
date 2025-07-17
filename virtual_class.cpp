#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_number(int a)
    {
        roll_number = a;
    }
    void print_number(void)
    {
        cout << "Your roll number is " << roll_number << endl;
    }
};
class test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is here : " << endl
        << "Maths : " << maths << endl
        << "Physics : " << physics << endl;
    }
};

class sports : virtual public Student {
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout << "Your score is : " <<score <<endl;
    }
};

class result : public test ,public sports{
    private :
    float total ;
    public :
    void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your Total score is : "<<total <<endl;
    }
};

 int main()
{
    result anshu;
    anshu.set_marks(78.67,98.8);
    anshu.set_number(695);
    anshu.set_score(9);
    anshu.display();


    return 0;
}