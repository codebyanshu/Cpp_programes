// Employee Management system

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

void displayEmploye(const Employee &emp)
{
    cout << "ID : " << emp.id << " " << " , Name : " << emp.name << " , Salary " << emp.salary << endl;
}

int main()
{
    vector<Employee> employees = {
        {101, "anshu", 10000},
        {102, "lovish", 20000},
        {103, "mani", 30000},
        {104, "aryan", 80000},
        {105, "priti", 60000},
        {106, "diya", 70000},
    };

    sort(employees.begin(), employees.end(), [](const Employee &e1, const Employee &e2)
         { return e1.salary > e2.salary; });
    cout << "Employee sorted by salary -> high to low \n";

    for_each(employees.begin(), employees.end(), displayEmploye);
    vector<Employee> highEarners;
    copy_if(employees.begin(),
            employees.end(),
            back_inserter(highEarners),
            [](const Employee &e)
            {
                return e.salary > 50000;
            });
    cout << "Employee who are High Earners more then 50000 \n";
    for_each(highEarners.begin(), highEarners.end(), displayEmploye);

    double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee &e)
                                    { return sum + e.salary; });
    cout << "Total salary is : " << totalSalary << endl;

    double averageSalary = totalSalary / employees.size();
    cout << "Total Average salary is : " << averageSalary << endl;

    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee &e1, const Employee &e2){
     return e1.salary < e2.salary; });
    if (highestPaid != employees.end())
    {
        cout << "Total highest Paid salary is : " << highestPaid->salary << endl;
    }
    return 0;
}