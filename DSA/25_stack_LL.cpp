#include <iostream>
using namespace std;

class stack
{
    stack *next;
    int data;
public:

    /* void traverseStack(stack *p)
    {
        stack *ptr = p;
        if (p->IsEmpty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            while (ptr != NULL)
            {
                cout << ptr->data << " ";
                ptr = ptr->next;
            }
            cout << "" << endl;
        }
    } */
    void peek(){
        if (this->IsEmpty())
        {
            cout << "stack is empty" << endl;
        }
        else{
            cout<< this->data << endl;
        }        
        
    }

    int IsFull()
    {
        stack *p = new (stack);
        if (p == NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int IsEmpty()
    {
        if (this == NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    stack *push(int element)
    {
        stack *ptr = new (stack);
        if (this->IsFull())
        {
            cout << "Stack overflow" << endl;
            return this;
        }
        else
        {
            ptr->next = this;
            ptr->data = element;

            return ptr;
        }
    }
    stack *Pop()
    {
        if (this->IsEmpty())
        {
            cout << "stack underflow" << endl;
            return 0;
        }
        else
        {
            cout << "data value is: " << this->data << endl;
            stack *p = this;
            stack *ptr = this->next;
            free(p);
            if (this->next == NULL)
            {
                return NULL;
            }
            return ptr;
        }
    }
};

int main(int argc, char const *argv[])
{
    stack *top;
    top = NULL;

    cout << top->IsEmpty() << endl;
    top = top->push(1);
    top = top->push(2);
    top = top->push(3);
    top = top->push(4);
    top->peek();

    // top->traverseStack(top);
    cout << top->IsEmpty() << endl;

    cout << "----------------------" << endl;

    top = top->Pop();
    top = top->Pop();
    top = top->Pop();
    top = top->Pop();
    top = top->Pop();    
    top->peek();    

    // top->traverseStack(top);
    cout << top->IsEmpty() << endl;

    return 0;
}