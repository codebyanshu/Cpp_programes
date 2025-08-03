#include <iostream>
using namespace std;
template <class Y>
class vector
{
public:
    Y *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new Y[size];
    }
    Y dotProduct(vector &v)
    {
        Y d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(4);
    v1.arr[0] = 4.4;
    v1.arr[1] = 5.3;
    v1.arr[2] = 6.2;
    v1.arr[3] = 7.7;

    vector<float> v2(4);
    v2.arr[0] = 1.5;
    v2.arr[1] = 6.2;
    v2.arr[2] = 3.9;
    v2.arr[3] = 2.3;

    float a = v1.dotProduct(v2);
    cout << a << endl;

    return 0;
}