#include <iostream>
using namespace std;
class stack
{
public:
    int size;
    int top;
    char *arr;
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
            char x;
            x = this->arr[this->top];
            cout << "popped char: " << x << endl;
            (this->top)--;
            return 1;
        }
    }
    
};
int paranthesismatch(char * exp){
        stack * s = new (stack);
        s->size = 100;
        s->arr = new char[s->size];

        for (int i = 0; exp[i] != '\0'; i++)
        {
            if(exp[i] == '('){
                s->Push('(');
            }            
            else if (exp[i] == ')')
            {
                if(s->IsEmpty()){ return 0;}
                s->Pop();
            }            
        }

        if(s->IsEmpty()){
            return 1;
        }
        else{
            return 0;
        }
        
    }

int main(int argc, char const *argv[])
{
    char * exp  = "((8)+78-56(9*5)"; 
    if (paranthesismatch(exp)){
        cout<<"The brackets are matching"<<endl;
    }
    else{
        cout<<"The brackets are not matching"<<endl;
    }   
    

    return 0;
}