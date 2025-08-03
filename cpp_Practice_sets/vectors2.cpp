#include <iostream>
#include <vector>
using namespace std;
int main()
{
//     vector<int> numbers = {1,2,3,4,5,6};
//   cout << "element at index 0 is " << numbers[0] << endl;
    // cout << "element at index 0 using at is " << numbers.at(0) << endl; // this method provides bound checking

    // cout << "element at last is " << numbers.back() << endl;
    // cout << "element at front is " << numbers.front() << endl;

    // numbers.at(1) = 10;
    // cout << "element at index 1 is " << numbers[1] << endl;

    // vector <int> v = {1,2,3,4,5,6,7};
    // vector <int> ::iterator it;
    // for(it = v.begin();it != v.end();it++){
    //     cout<<*it << " ";
    // }

// rbegin() and rend()

// vector<int>::reverse_iterator rit;
// for(rit = v.rbegin();rit != v.rend();rit++){
//     cout<<*rit << " ";
// }

// vector <char> vowels = { 'a', 'e','i','o','u'};
// cout << "Size of this vector is " << vowels.size() << endl;
// cout << "Max Size of this vector is " << vowels.max_size()<<endl;
// cout << "Capacity of this vector is " << vowels.capacity() << endl;
// vowels.resize(3);
// vowels.reserve(100);
// cout << "Size of this vector is " << vowels.size() << endl;
// cout << "Capacity of this vector is " << vowels.capacity() << endl;
// v.reserve(100);
// cout << "Capacity of this vector v is " << v.capacity() << endl;
// v.shrink_to_fit();
// cout << "Capacity of this vector v is " << v.capacity() << endl;
// vector <int> n = {1,3,4,4};

// if (v.empty())
// {
//     cout << "no elements present in vector " << endl;
// }


// n.resize(10,20);
// for (int i = 0; i < n.size(); i++)
// {
//     cout<<n.at(i)<<" ";
// }


// vector <int> v1;
// int var;
// do{
// cout << "Enter the value (enter 0 to exit)";
// cin >> var;
// v1.push_back(var);
// }while (var);

// cout << "Elements befor pop back " << endl;
// for (int i = 0; i < v1.size(); i++)
// {
//     cout<< v1[i] << " ";
// }
// v1.pop_back();
// v1.pop_back();
// cout << "Elements after pop back " << endl;
// for (int i = 0; i < v1.size(); i++)
// {
//     cout<< v1[i] << " ";
// }

vector <int> v3 = {1,2,3,4,5,6,7};

// v3.erase(v3.begin()+3);
// range
v3.erase(v3.begin()+1,v3.begin()+3);


cout << "Elements after erase " << endl;
for (int i = 0; i < v3.size(); i++)
{
    cout<< v3[i] << " ";
}


// vector <int> :: iterator it;
// it = v3.begin() + 3;
// v3.insert(it,80);

// cout << "Elements after inster " << endl;
// for (int i = 0; i < v3.size(); i++)
// {
//     cout<< v3[i] << " ";
// }




return 0;
}