#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_Roll_Number(int);
    void get_Roll_Number(void);
};
void Student ::set_Roll_Number(int r)
{
    roll_number = r;
}
void Student ::get_Roll_Number(void)
{
    cout << "The Roll number is : " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam ::setMarks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam ::getMarks(void)
{
    cout << "The marks obtaiend in maths are : " << maths << endl;
    cout << "The marks obtaiend in physics are : " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_result(void)
    {
        get_Roll_Number();
        getMarks();
        cout << "Your Percentage is " << (maths + physics) / 2 <<"%" << endl;
    }
};
int main()
{
    Result ak;
    ak.set_Roll_Number(695);
    ak.setMarks(98.2,78.9);
    ak.display_result();

    return 0;
}