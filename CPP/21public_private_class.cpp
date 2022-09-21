#include <iostream>
using namespace std;

class employee {
    private:
    int salary;
    long long phone;

    public:
    int age;
    string name;
    //Two ways of declaring a functions 
    void print();        // only declaring the functions 
    // declaring and defining the function
    void getprivate(int a, long long b){
        salary = a;
        phone = b;
    }
};
// defining the function outside the class
void employee ::  print(){
    cout<<"the name of  the employee is "<<name<<endl;
    cout<<"The age of the employee is "<<age<<endl;
    cout<<"The salary of the employee is "<<salary<<endl;
    cout<<"The phone no. of the employee is "<<phone<<endl;
}

int main(int argc, char const *argv[])
{
    employee harry;
    harry.age = 26;
    harry.name = "HARRY";
    // harry.salary declaring salary like this will give compiler
    harry.getprivate(100000, 7865743609);
    harry.print();
   
        
    return 0;
}