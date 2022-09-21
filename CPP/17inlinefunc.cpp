#include <iostream>
#include <iomanip>
using namespace std;

inline int product(int a, int b){
    return a*b;
}
int returns(int currentMoney, float interest = 1.04){
    return currentMoney * interest;
}

// int strlen(const char *p){}
// we use const prefix for variables wherewe dont want accidental changes to the said variable 
// ex the address of a string passed into a function 

int main(int argc, char const *argv[])
{
    int a = 2, b = 5;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b ;
    cout<<"There product of 2 and 5 is "<<product(a, b)<<endl;
    int money = 100000;
    cout<<"IF the principle amount is "<<money<<" then the amount returned after one year is "<<returns(money)<<endl;
    cout<<"VIP: IF the princip;e amount is "<<money<<" then the amount returned after one year is "<<returns(money, 1.1)<<endl;
    return 0;
}
    
    
    
    // Inline functions are to be used only in cases where the code of the function is 
    // 1.short, because long code function will take too much cache memory 
    // as in inline funct replaces the function call this saves the time for calling a function 
    // but this increses the space used
    // 2. there is no recursion 
    // 3. there is no static variable in the function 
        