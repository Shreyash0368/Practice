#include <bits/stdc++.h>

int max(int a, int b) {
    if (a > b)
    {
        return a;
    }
    else 
    {
        return b;
    }    
}

int main(int argc, char const *argv[])
{
    int n = 4;
    int m = 8;
    int profit[n + 1] = {0, 1, 2, 5, 6};
    int weight[n + 1] = {0, 2, 3, 4, 5};
    // no. of objects are 4
    // capacity of knapsack is 8

    int knapsack[n + 1][m + 1]{0};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            knapsack[i][j] = 0;
        }        
    }
           
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (weight[i] <= j) {
                if ((i - 1) >= 0 && (j - weight[i]) >= 0)
                    knapsack[i][j] = max(knapsack[i - 1][j], knapsack[i - 1][j - weight[i]] + profit[i]);
            }
            else {
                if (i - 1 >= 0) 
                    knapsack[i][j] = knapsack[i - 1][j];
            }
        }        
    }

    std :: cout << "The highest profit achieved is: " << knapsack[4][8] << "\n" ;
    
    return 0;
}
