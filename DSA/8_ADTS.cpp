#include <iostream>
using namespace std;

class array
{
private:
    int total_size;
    int used_size;
    int *ptr;

public:
    void createarray(array *a, int tsize, int usize);
    void setVal(array *a);
    void show(array *a);
};
void array ::createarray(array *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = new int(usize);
}

void array ::setVal(array *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        cout << "Enter the value at position " << i << ": ";
        cin >> n;
        (a->ptr)[i] = n;
    }
}
void array ::show(array *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        cout << (a->ptr)[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    array a1;
    int m,n;
    cout<<"Enter size of array and no of elements"<<endl;
    cin>>m>>n;

    a1.createarray(&a1, m, n);
    a1.setVal(&a1);
    a1.show(&a1);

    return 0;
}