#include <iostream>
using namespace std;

class array
{
    static int counter;
    int total_size;
    int used_size;
    int *ptr;

public:
    void createarr(array *a, int tsize, int usize);
    void setVal(array *a);
    void show(array *a);
    static void getcount(){
        cout<<"The count is "<<counter<<endl;
    }
    void free(array * a){
        delete [] (a->ptr);
    }
};

void array ::createarr(array *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = new int(tsize);
    counter++;
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
        cout << "The value at position" << i << ": " << (a->ptr)[i] << endl;
    }
}
int array ::counter;
int main()
{

    array a1, a2, c1;
    a1.createarr(&a1, 5, 3);
    a1.setVal(&a1);
    a1.show(&a1);
    a1.free(&a1);
    array ::getcount();
    a2.createarr(&a2, 5, 4);
    a2.setVal(&a2);
    a2.show(&a2);
    a1.free(&a2);
    array ::getcount();
    c1.createarr(&c1, 6, 3);
    c1.setVal(&c1);
    c1.show(&c1);
    a1.free(&c1);
    array ::getcount();

    return 0;
}
