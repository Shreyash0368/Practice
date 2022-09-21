#include <iostream>
using namespace std;

class queue;

queue * f = NULL;
queue * r = NULL;


class queue{
    public:
    int data;
    queue * next;
       
};
void traverse(queue * a){
    queue * ptr = a;
    int i = 0;
    cout<<"traversing queue: "<<endl;
    while(ptr != NULL){
        cout<<"data "<< i << ": " << ptr->data <<endl;
        ptr=ptr->next;
        i++;
    }
}
int Isfull(){
        queue * ptr = new queue;
        if (ptr == NULL)
        {
            return 1;
        }
        else{
            return 0;
        }        
    }

void enqueue(int val){
    queue * ptr = new queue;
    if(! Isfull()){
        ptr->data = val;
        ptr->next = NULL;
        if(f == NULL){
            f = r = ptr;
        }
        else{
            r->next = ptr;
            r = ptr;
        }
    }
    else{
        cout<<"Queue is full"<<endl;
    }
}
int dequeue(){
    int val = -1;
    queue * ptr = f;
    if(f == NULL){
        cout<<"Queue is empty"<<endl;
    }
    else{
        val = f->data;
        f = f->next;
        free(ptr);
    }
    return val;
}

int main(int argc, char const *argv[])
{
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    traverse(f);

    cout<<"dequeuing: "<< dequeue()   <<endl;
    cout<<"dequeuing: "<< dequeue()   <<endl;
    cout<<"dequeuing: "<< dequeue()   <<endl;
    cout<<"dequeuing: "<< dequeue()   <<endl;
    cout<<"dequeuing: "<< dequeue()   <<endl;
    traverse(f);
    
    return 0;
}