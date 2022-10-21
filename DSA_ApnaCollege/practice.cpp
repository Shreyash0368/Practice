#include <bits/stdc++.h>

int octalToDecimal(int oct)
{
    int i = 0;
    int decimal = 0;
    while (oct > 0)
    {
        int x = oct % 10;
        decimal += x * pow(8, i);
        i++;
        oct /= 10;
    }

    return decimal;
}

// simm. code for binary to decimal but with base 2

int hexadecimalToDecimal(std ::string hex)
{
    int size = hex.size();
    int j = 0;
    int decimal = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
            decimal += ((hex[i] - '0') * pow(16, j));
        if (hex[i] >= 'A' && hex[i] <= 'F')
            decimal += ((hex[i] - 'A' + 10) * pow(16, j));

        j++;
    }

    return decimal;
}

int decimalToBinary(int dec)
{
    std ::vector<int> binary;
    while (dec > 0)
    {
        int x = dec % 2;
        binary.push_back(x);
        dec /= 2;
    }

    std ::reverse(binary.begin(), binary.end());
    int bin = 0;

    for (int i = 0; i < binary.size(); i++)
    {
        bin += binary[i];
        bin *= 10;
    }
    bin /= 10;

    return bin;
}

int decimalToOctal(int dec)
{
    std ::vector<int> octal;
    while (dec > 0)
    {
        int x = dec % 8;
        octal.push_back(x);
        dec /= 8;
    }

    std ::reverse(octal.begin(), octal.end());
    int oct = 0;

    for (int i = 0; i < octal.size(); i++)
    {
        oct += octal[i];
        oct *= 10;
    }
    oct /= 10;

    return oct;
}

std ::string decimalToHexadecimal(int dec)
{
    std ::string hex;
    while (dec > 0)
    {
        int x = dec % 16;
        std ::string x2;
        if (x >= 10)
            x2 = char(int((x - 10) + 'A'));
        else if (x < 10)
            x2 = std ::to_string(x);
        hex += x2;
        dec /= 16;
    }

    std ::reverse(hex.begin(), hex.end());

    // for (int i = 0; i < hexadec.size(); i++)
    // {
    //     hex.push_back(hexadec[i]);
    // }

    return hex;
}

int addBinary(int a, int b)
{
    int carry = 0;
    int tempSum = 0;
    int a1, b1;

    while (a > 0 && b > 0)
    {
        a1 = a % 2;
        b1 = b % 2;

        if (a1 == 0 && b1 == 0)
        {
            tempSum = (tempSum * 10) + carry;
            carry = 0;
        }
        else if ((a1 == 1 && b1 == 0) || (a1 == 0 && b1 == 1))
        {
            if (carry == 1)
            {
                tempSum = tempSum * 10 + 0;
                carry = 1;
            }
            else if (carry == 0)
            {
                tempSum = tempSum * 10 + 1;
                carry = 0;
            }
        }
        else
        {
            tempSum = tempSum * 10 + carry;
            carry = 1;
        }

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
    while (b > 0) {
        if(carry == 1) {
            if (b % 2 == 1) {
                tempSum = tempSum * 10 + 0;
                carry = 1;
            }
            else if(b % 2 == 0) {
                tempSum = tempSum * 10 + 1;
                carry = 0;
            }
        }
        else if (carry == 0) {
            if (b % 2 == 1) {
                tempSum = tempSum * 10 + 1;
                carry = 0;
            }
            else if(b % 2 == 0) {
                tempSum = tempSum * 10 + 0;
                carry = 0;
            }              
        }   
        b /= 10;     
    }

    // accounting for leftover carry
    if(carry == 1) {
        tempSum = tempSum * 10 + carry;
        carry = 0;
    }

    // reversing the num
    int sum = 0;
    while (tempSum > 0) {
        sum = sum * 10 + (tempSum % 10);
        tempSum /= 10;
    }

    sum *= 10; 

    return sum;
}

int main(int argc, char const *argv[])
{
    int a,b;
    std :: cin >> a >> b;
    std :: cout << addBinary(a, b) << "\n";

    return 0;
}
