#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr;
    stack(){
        this -> top = -1;
    }
    void print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << " " << arr[i];
        }
        cout << "" << endl;
    }
    int Peek(int i)
    {
        if (top < i || i < 0)
        {
            cout << "Invalid index" << endl;
            return 0;
        }
        else
        {
            cout << "no. at position " << i << " is: " << arr[i] << endl;
            return 1;
        }
    }

    int IsEmpty()
    {
        if (this->top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int IsFull()
    {
        if (this->top == (this->size) - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int Push(int element)
    {
        if (this->IsFull())
        {
            cout << "stack is already full" << endl;
            return 0;
        }
        else
        {
            (this->top)++;
            this->arr[this->top] = element;
            return 1;
        }
        
    }
    int Pop()
    {
        if (this->IsEmpty())
        {
            cout << "Stack altready empty" << endl;
            return 0;
        }
        else
        {
            int x;
            x = this->arr[this->top];
            cout << "popped char: " << x << endl;
            (this->top)--;
            return 1;
        }
    }
};

int main(int argc, char const *argv[])
{
    stack *s;
    s = new ( stack);
    s->size = 10;
    s->top = -1;
    s->arr = new int[s->size];
    cout << "before push/pop: ";

    if (s->IsEmpty())
    {
        cout << "Is empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    for (int i = 0; i < s->size; i++)
    {
        s->Push(i);
    }
    s->print();
    s->Push( 11);
    s->Pop();
    s->print();

    if (s->IsFull())
    {
        cout << "Is Full" << endl;
    }
    else
    {
        cout << "Not Full" << endl;
    }
    cout<<"Top is: "<< s->top  <<endl;
    s->Peek(5);

    return 0;
}