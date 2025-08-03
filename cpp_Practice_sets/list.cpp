#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator itr;
    for (itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1;    // Empty list with size 0
    // adding data to list
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(1);

    
    list<int>::iterator it;
    it = list1.begin();
    // cout << *it << endl;
    // it++;
    // cout << *it << endl;
    // it++;
    // cout << *it << endl;
    // it++;
    // cout << *it << endl;
    
    // removing elements from list
    // display(list1);
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(8);

    // sorting
    list1.sort();
    display(list1);
    
    list<int> list2(3); // empty list with size 7
    list<int> :: iterator its;
    its = list2.begin();
    *its = 45;
    its++;
    *its = 5;
    its++;
    *its = 4;
    its++;
    list2.sort();
    display(list2);
    list1.merge(list2);
    cout <<"After merging" <<endl;
    display(list1);

    // reversing the list
    list1.reverse();
    display(list1);

    return 0;
}