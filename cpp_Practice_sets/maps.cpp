#include <iostream>
#include <map>
using namespace std;
// Map is an associative array;

int main()
{
    map<string,int> marksMap;

    marksMap["anshu"] = 97;
    marksMap["lovish"] = 87;
    marksMap["mani"] = 78;
    
    // inserting
    marksMap.insert({{"anmol",98},{"kajal",88}});
    map<string,int> :: iterator itr;
    for (itr = marksMap.begin();itr != marksMap.end(); itr++)
    {
        cout<<(*itr).first <<" " <<(*itr).second <<endl;
    }
    

    return 0;
}