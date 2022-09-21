#include <iostream>
#include <iomanip>
using namespace std;
class queue;

queue * front= NULL;
queue * back = NULL;

class queue{
    public:
    int data;
    queue * next;
    
};

int Isfull(){
        queue * ptr = new queue;
        if(ptr == NULL){
            return 1;
        }
        else{
            return 0;
        }

    }

    int Isempty(){
        if(front == NULL){
            return 1;
        }
        return 0;
    }

    void enqueue(int val){
        if( ! Isfull()){
        queue * ptr = new queue;
            ptr->data = val;
        ptr->next = NULL;
        if(front == NULL){
            front = back = ptr;
        }
        else{
            back->next = ptr;
            back = ptr;
        }
        }
        else{
            cout<<"heap full"<<endl;
        }        
    }

    int dequeue(){
        int val = -1;
        if(! Isempty() ){
            queue * ptr;
            ptr = front;
            val = front->data;
            front = front->next;
            free(ptr);
            return val;        
        }
        return val;
    }
void traverse(){
    queue * ptr = front;
    int i = 0;
    while (ptr != NULL)
    {
        cout<< ptr->data << " " ;
        ptr = ptr->next;
        i++;        
    }
    cout<<""<<endl;
    
}
int main(int argc, char const *argv[])
{
    cout<<"Isfull: "<< Isfull() <<endl;
    cout<<"Isempty: "<< Isempty() <<endl;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    cout<<"Isfull: "<< Isfull() <<endl;
    cout<<"Isempty: "<< Isempty() <<endl;
    traverse();
    dequeue();
    dequeue();
    dequeue();
    traverse();
    
    return 0;
}