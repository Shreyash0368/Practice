#include <iostream>
using namespace std;
class complex;

class subtraction
{
public:
    int subtractReal(complex, complex);
    int subtractComp(complex, complex);
};

class complex
{
    int a;
    int b;
    friend complex sumComplex(complex o1, complex o2);
    friend subtraction;

public:
    void setcomplex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printComp()
    {
        cout << a << " + i" << b << endl;
    }
};

int subtraction ::subtractReal(complex o1, complex o2)
{
    cout << (o1.a - o2.a) << endl;
}

int subtraction ::subtractComp(complex o1, complex o2)
{
    cout << (o1.b - o2.b) << endl;
}

complex sumComplex(complex o1, complex o2)
{
    complex c;
    c.a = o1.a + o2.a;
    c.b = o1.b + o2.b;
    return c;
}

int main(int argc, char const *argv[])
{
    complex a, b, c;
    a.setcomplex(5, 6);
    a.printComp();
    b.setcomplex(3, 9);
    b.printComp();
    c = sumComplex(a, b);
    c.printComp();

    return 0;
}