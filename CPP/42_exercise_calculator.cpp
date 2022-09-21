#include <iostream>
#include <cmath>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

class calculator
{
public:
    void add(int x, int y)
    {
        cout << "The addition of " << x << " and " << y << "is: "<< x + y << endl;
    }
    void subtract(int x, int y){
        cout << "The subtraction of " << x << " from " << y << "is: "<< x - y << endl;
    }
    void multiplication(int x, int y){
        cout << "The multiplication of " << x << " and " << y << "is: "<< x * y << endl;
    }
    void divide(int x, int y){
        cout << "The division of " << x << " by " << y << "is: "<< x / y << endl;
    }
};

class scientific_claculator : public calculator{
    public:
    void power(int x, int y){
        
        cout << x << " raise to the power " << y << "is:"<< pow(x,y) << endl;
    }

    void binary(int n)
    {
        int temp = n;
        int bin = 0;
        vector <int> binary;
        while (n != 0 )
        {
            int digit = (n % 2);
            binary.push_back(digit);           
            n = n/2;                        
        }  
        
        cout<< temp << " converted to binary is: "<< bin <<endl;      
    }
};

int main(int argc, char const *argv[])
{
    scientific_claculator d;
    d.binary(14);

    return 0;
}