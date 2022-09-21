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
    char Pop()
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
            return x;
        }
    }
};

int matching(char a, char b){
    if(a == '(' && b == ')'){
        return 1;
    }
    else if(a == '[' && b == ']'){
        return 1;
    }
    else if(a == '{' && b == '}'){
        return 1;
    }
    return 0;
}

int paranthesismatch(char * exp){
    stack * obj = new stack;
    obj->size = 100;
    obj->arr = new char[obj->size];
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if ((exp[i] == '(') || (exp[i] == '[') || (exp[i] == '{'))
        {
            char val = exp[i];
            obj->Push(val);
        }
        else if((exp[i] == ')') || (exp[i] == ']') || (exp[i] == '}')){
            if(obj->IsEmpty()){

            return 0;            
            }
            char val = obj->Pop();
            if(!matching(val, exp[i])){
                return 0;
            }
        }        
    }

    if (obj->IsEmpty())
    {
        return 1;
    }
    else{
        return 0;
    }      
}


int main(){
    
    char exp[] = "{[343-343] * (6454) - {3534}}";

    if(paranthesismatch(exp)){
      cout<<"brackets are matched"<<endl;
    }
    else{
      cout<<"brackets are not matched"<<endl;
    }
      


    return 0;
}