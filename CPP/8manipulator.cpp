#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 34, c = 2343;
    float b = 24.45;

    // ***************manipulators***************
    // setw is used to define the width of the output
    // we need to include iomanip to use setw

    cout << "the value of a without setw " << a << endl;
    cout << "the value of b without setw " << b << endl;
    cout << "the value of c without setw " << c << endl;

    cout << "the value of a with setw(6) " << setw(6) << a << endl;
    cout << "the value of b with setw(6) " << setw(6) << b << endl;
    cout << "the value of c with setw(6) " << setw(6) << c << endl;

    return 0;
}
