#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <pair<int,string>> student_data = {{1,"anshu"},{2,"lovish"},{3,"rahul"}};
    for (int i = 0; i < student_data.size(); i++)
    {
        cout << student_data[i].first << " " <<student_data[i].second << endl;
    }
    
    // student_data.push_back({4,"mani"});
    student_data.push_back(make_pair(4,"mani"));
    student_data.erase(student_data.begin()+1);

    
    for (int i = 0; i < student_data.size(); i++)
    {
        cout << student_data.at(i).first << " " <<student_data.at(i).second << endl;
    }

    cout << student_data.size()<<endl;
    cout << student_data.capacity();

    return 0;
}