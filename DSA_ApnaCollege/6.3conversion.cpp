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

    return hex;
}

int main(int argc, char const *argv[])
{
    int a,b;
    std :: cin >> a;
    std :: cout << decimalToOctal(a) << "\n";

    return 0;
}
