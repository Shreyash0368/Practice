#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex();         // default constructor
    complex(int x, int y); // parameterized constructor
    void printComp()
    {
        cout << a << " + i" << b << endl;
    }
};

class point
{
    int p1;
    int p2;

public:
    point(int a = 0, int b = 0)
    { // parameterized constructor with default values
        p1 = a;
        p2 = b;
    }
    void printPoint()
    {
        cout << "The point is: "
             << "(" << p1 << ", " << p2 << ")" << endl;
    }
    point(point &obj)
    {
        p1 = obj.p1;
        p2 = obj.p2;
        cout << "Copy constructor called" << endl;
    }
};

complex ::complex(void)
{
    a = 0;
    b = 0;
}
complex ::complex(int x, int y)
{
    a = x;
    b = y;
}

int main(int argc, char const *argv[])
{
    complex a, c(7, 9);        // implicit call in c
    complex b = complex(2, 3); // explicit call in b
    a.printComp();
    b.printComp();
    c.printComp();

    point p, q(4, 6), y;
    p.printPoint();
    q.printPoint();
    point x(q); // copy constructor called
    x.printPoint();
    y =x; // copy const not called because obj was created before itself
    y.printPoint();
    point m = x; // copy const called again
    m.printPoint();

    return 0;
}