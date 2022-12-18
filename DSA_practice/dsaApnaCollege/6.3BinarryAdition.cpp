#include <bits/stdc++.h>

void checkDigit(int a1, int b1, int &tempSum, int &count, int &carry)
{
    if (a1 == 0 && b1 == 0)
    {
        tempSum = (tempSum * 10) + carry;
        carry = 0;
        if (tempSum == 0)
        {
            count++;
        }
    }
    else if ((a1 == 1 && b1 == 0) || (a1 == 0 && b1 == 1))
    {
        if (carry == 1)
        {
            tempSum = tempSum * 10 + 0;
            carry = 1;
            if (tempSum == 0)
            {
                count++;
            }
        }
        else if (carry == 0)
        {
            tempSum = tempSum * 10 + 1;
            carry = 0;
            if (tempSum == 0)
            {
                count++;
            }
        }
    }
    else
    {
        tempSum = tempSum * 10 + carry;
        carry = 1;
        if (tempSum == 0)
        {
            count++;
        }
    }
}

int addBinary(int a, int b)
{
    int carry = 0;
    int tempSum = 0;
    int a1, b1;
    int count = 0;

    while (a > 0 && b > 0)
    {
        a1 = a % 2;
        b1 = b % 2;
        checkDigit(a1, b1, tempSum, count, carry);
        a /= 10;
        b /= 10;
    }

    // if a remains
    while (a > 0)
    {
        if (carry == 1)
        {
            if (a % 2 == 1)
            {
                tempSum = tempSum * 10 + 0;
                carry = 1;
            }
            else if (a % 2 == 0)
            {
                tempSum = tempSum * 10 + 1;
                carry = 0;
            }
        }
        else if (carry == 0)
        {
            if (a % 2 == 1)
            {
                tempSum = tempSum * 10 + 1;
                carry = 0;
            }
            else if (a % 2 == 0)
            {
                tempSum = tempSum * 10 + 0;
                carry = 0;
            }
        }
        a /= 10;
    }

    // if b remains
    while (b > 0)
    {
        if (carry == 1)
        {
            if (b % 2 == 1)
            {
                tempSum = tempSum * 10 + 0;
                carry = 1;
            }
            else if (b % 2 == 0)
            {
                tempSum = tempSum * 10 + 1;
                carry = 0;
            }
        }
        else if (carry == 0)
        {
            if (b % 2 == 1)
            {
                tempSum = tempSum * 10 + 1;
                carry = 0;
            }
            else if (b % 2 == 0)
            {
                tempSum = tempSum * 10 + 0;
                carry = 0;
            }
        }
        b /= 10;
    }

    // accounting for leftover carry
    if (carry == 1)
    {
        tempSum = tempSum * 10 + carry;
        carry = 0;
    }

    // reversing the num
    int sum = 0;
    while (tempSum > 0)
    {
        sum = sum * 10 + (tempSum % 10);
        tempSum /= 10;
    }

    sum *= std ::pow(10, count);

    return sum;
}

int main(int argc, char const *argv[])
{
    int a, b;
    std ::cin >> a >> b;
    std ::cout << addBinary(a, b) << "\n";

    return 0;
}
