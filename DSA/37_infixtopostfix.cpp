#include <iostream>
#include <cstring>
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
            // cout << "popped char: " << x << endl;
            (this->top)--;
            return x;
        }
    }
    char stacktop(){
        char y;
        y = this->arr[this->top];
        return y;
    }
};

int checkoperator(char x){
    if((x == '+') || (x == '-') || (x == '*') || (x == '/')  ){
        return 1;
    }
    else{
        return 0;
    }
}

int precedence(char x){
    if ((x == '*') || (x == '/'))    
        return 3;    
    else if ((x == '+') || (x == '-'))    
        return 2;    
    else
        return 0;
      
}

char * infixtopostfix(char * infix){
    stack * post = new stack;
    post->size = 20;
    post->arr = new char[20];
    char * postfix = new char[ strlen(infix) + 1 ];
    int i =0, j = 0;

    while( infix[i] != '\0' ){
        if(! checkoperator(infix[i])){
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else{
            if ( precedence(infix[i]) > precedence(post->stacktop()))
            {
                post->Push(infix[i]);
                i++;
            }
            else{
                postfix[j] = post->Pop();
                j++;
            }            
        }
    }

    while ( ! post->IsEmpty())
    {
        postfix[j] = post->Pop();
        j++;
    }

    postfix[j] = '\0';
    return postfix;
    
}

int main(){
    char  infix[] = "x-y/z-k*d";
    cout<< infix <<endl;
    cout<< infixtopostfix(infix) << endl;

    return 0;
}