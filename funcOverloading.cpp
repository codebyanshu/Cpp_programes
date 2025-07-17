#include <iostream>
using namespace std;
// function overloading
int sum(int a,int b)
{
    return a + b;
}
int sum(int a,int b,int c)
{
    return a + b;
}
int sum(int a,double b)
{
    return a + b;
}
int sum(double a,int b)
{
    return a + b;
}
int sum(double a,double b)
{
    return a + b;
}
// Calcuating the volume 
 
// volume of cylinder
int volume(double r, int h){
    return 3.14 * r* r*h;
}
// volume of cube
int volume(int a){
    return a * a * a;
}
// volume of cuboid
int volume(int a,int b ,int c){
    return a * b * c;
}

int main(){
cout << "the sum of two num is " << sum(12.3,8) <<endl;
cout << "the sum of two num is " << sum(12,32)<<endl;
cout << "the sum of two num is " << sum(12,32,76)<<endl;
cout << "the sum of two num is " << sum(34.3,12.1)<<endl;
cout << "the sum of two num is " << sum(4,3.4)<<endl;

cout << "The volume of cylender is : " << volume(3.14,2)<<endl;
cout << "The volume of cuboide is : " << volume(2,3,5)<<endl;
cout << "The volume of cube is : " << volume(2)<<endl;

}