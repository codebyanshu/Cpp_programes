#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v[3];
    // v.push_back(1); // it is wrong,v is not a vector its a array
    // solution use index
    // v[0].push_back(1);
    // v[0].push_back(34);
    // v[1].push_back(87);
    // v[2].push_back(56);
    // v[2].push_back(89);
    // v[2].push_back(21);
    // methd 2.
    for (int i = 0; i < 3; i++)
    {
        int n;
        cout << "Enter the size of vector " << i + 1 << " ";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            v[i].push_back(a);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "Number of elements in vectors " << i + 1 << " are " << v[i].size() << endl;
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}