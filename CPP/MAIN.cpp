#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    Employee(string name, int salary, int sp)
    {
        this->name = name;
        this->salary = salary;
        this->secretpassword = sp;
    }
    void printdetails()
    {
        cout << "The name of the employee is " << this->name << " and his salary is "
             << this->salary << "$" << endl;
    }
    void GetSecretPassword(){
        cout<<"The secret password of the emplouyee is "<<this->secretpassword;
    }
private:
  int secretpassword;

};
int main(int argc, char const *argv[])
{
    // cout<<"hello world"<<endl ;
    // cout<< "next line";
    // int a, b, c;
    // a = 5, b = 10;
    // cout<<"the value of a is"<<a;
    // cout<<"the value of b is"<<b<<endl;
    // short sa = 9;
    // cout<<sa <<endl;

    // CAMELCASENOTATION
    // int MarkInMaths = 68;
    // cout<<"The marks in Maths is: "<<MarkInMaths<<endl;
    // cout<<"Enter the first number"<<endl;
    // cin>>a;
    // cout<<"Enter the second number"<<endl;
    // cin>>b;
    // cout<<"the sum is "<<a + b<<endl;
    // cout<<"the division is "<<(float) a / b<<endl;

    // int age;
    // cout<<"enter ur age"<<endl;
    // cin>> age;
    // if (age > 120)
    // {
    //     cout<<"invalid age"<<endl;
    // }
    // else if (age >= 18)
    // {
    //     cout<<"u can vote"<<endl;
    // }

    // else
    // {
    //     cout<<"u can't vote"<<endl;
    // }
    // if we only use if if and no else if it will check all the conditions no matter what
    // switch (age)
    // {
    // case 12:
    //     cout<<"u are 12 yrs old"<<endl;
    //     break;
    // case 18:
    //     cout<<"u are 18 yr old"<<endl;
    //     break;

    // default:
    //      cout<<"neither 18 nor 12"<<endl;

    //     break;
    // }
    // int marks[6];
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"enter the marks of "<<i<<"th student"<<endl;
    //     cin>>marks[i];
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"the marks of "<<i<<"th kid is "<<marks[i]<<endl;
    // }

    // CLASSES
    Employee har("HarryConstructor", 344, 126745);
    // har.name = "harry";
    // har.salary = 100;
    har.printdetails();
    har.GetSecretPassword();
    // cout<<har.secretpassword<<endl; This will not print the private infos


    return 0;
}
