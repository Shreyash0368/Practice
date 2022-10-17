#include<iostream>

long factorial(int n) {
    long factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
    
}

int main(int argc, char const *argv[])
{
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std :: cout << factorial(i)/(factorial(i - j) * factorial(j)) << " "; 
        }
        std :: cout << "\n";        
    }
    
    
    return 0;
}
