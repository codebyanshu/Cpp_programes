#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> v;
    // v.push_back(2); // it is wrong inisilization because it except only type vector;
    v.push_back({2, 3});
    v.push_back({2});
    v.push_back({2, -21, 23});
    for (int i = 0; i < v.size(); i++)
    {
        for (auto it = v[i].begin(); it != v[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    vector <vector<int>> :: iterator it;
    it = v.begin();
    v.insert(it+1,{2,3,4,5});
    // v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        for (auto it = v[i].begin(); it != v[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}