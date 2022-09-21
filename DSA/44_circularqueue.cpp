#include <iostream>
using namespace std;

class circqueue{
    int f;
    int r;
    public:
    int size;
    int * arr;
    circqueue(){
        f=0;
        r =0;
    }
    int Isfull(){
        if(f == (r + 1) % size ){
            return 1;
        }
        else{
            return 0;
        }
    }

    int Isempty(){
        if(f == r){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    void encircqueue(int val){
        if(! this->Isfull()){
            arr[r] = val;
            r = (r + 1) % size;
            cout<<"val inserted: "<< val <<endl;
        }
        else{
            cout<<"circqueue full"<<endl;
        }
    }

    int decircqueue(){
        int val = -1;
        if(! this->Isempty()){
            val = arr[f];
            f = (f + 1) % size;
            return val;
        }
        return val;
    }
};

int main(int argc, char const *argv[])
{
    circqueue cq1;
    cq1.size = 5;
    cq1.arr = new int[cq1.size];

    cout<< "Isempty: " <<cq1.Isempty() <<endl;
    cq1.encircqueue(1);
    cq1.encircqueue(2);
    cq1.encircqueue(3);
    cq1.encircqueue(4);
    cq1.encircqueue(5);    
    cout<< "Isfill: " <<cq1.Isfull() <<endl;
    cout<< "value decircqueued: " << cq1.decircqueue() << endl;
    cout<< "value decircqueued: " << cq1.decircqueue() << endl;
    cout<< "value decircqueued: " << cq1.decircqueue() << endl;
    cout<< "value decircqueued: " << cq1.decircqueue() << endl;
    cout<< "value decircqueued: " << cq1.decircqueue() << endl;
    cout<< "value decircqueued: " << cq1.decircqueue() << endl;
    
    return 0;
}