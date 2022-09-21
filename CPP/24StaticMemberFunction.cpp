#include <iostream>

using namespace std;

class Employee
{

    int id;
    static int count;

public:
    void getData();
    void display();
    static void DispStatic()
    {
        cout << "The employee count is " << count << endl;
    }
};

void Employee ::getData()
{
    cout << "Enter the Id of the employee." << endl;
    cin >> id;
    count++;
}

void Employee ::display()
{
    cout << "The id of the employee is " << id << ". ";
}

int Employee ::count = 1000;

int main(int argc, char const *argv[])
{
    Employee Harry, Rishab, Sony;

    Harry.getData();
    Harry.display();
    Employee ::DispStatic();

    Rishab.getData();
    Rishab.display();
    Employee ::DispStatic();

    Sony.getData();
    Sony.display();
    Employee ::DispStatic();

    return 0;
}