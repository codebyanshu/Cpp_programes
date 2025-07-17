#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};
int main()
{
    point p(2, 4);
    point q(1, 8);
    p.displayPoint();
    q.displayPoint();

    return 0;
}