/* Note:
    1.Default visibility mode is private
    2.Public Visibility Mode: Public members of the base class
      becomes Public members of the derived class
    3.Private Visibility Mode: Public members of the base class
      become private members of the derived class
    4.Private members are never inherited
*/
#include <iostream>
#include <iomanip>
using namespace std;

class Employee
{
    int id;

public:
    float salary;
    Employee(int x, float Gsalary = 3.6)
    {
        id = x;
        salary = Gsalary;
    }
    Employee() {}
    void show()
    {
        cout << "The id and salary: " << id << ", " << salary << endl;
    }
};

class programmer : public Employee
{
    int code_no;

public:
    programmer(int code = 9, float inpSalary = 10)
    {
        code_no = code;
        salary = inpSalary;
        // id = input_id;
        // here we cant id from employee as it is private member
        // but we can access salary as it is a public member
    }
};

int main(int argc, char const *argv[])
{
    Employee harry(1), ram(2);
    cout << harry.salary << endl;
    ram.show();
    programmer ayaz(5, 6.9);
    ayaz.show(); // here id will print a garbage value as it is inaccessebile by class
    cout << ayaz.salary << endl;

    return 0;
}