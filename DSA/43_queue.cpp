#include <iostream>
using namespace std;

class queue
{
    int backind;
    int frontind;

public:
    int size;
    int *arr;
    queue()
    {
        frontind = -1;
        backind = -1;
    }

    int Isempty()
    {
        if (backind == frontind)
            return 1;
        else
            return 0;
    }
    int Isfull()
    {
        if (backind == size - 1)
            return 1;
        else
            return 0;
    }

    void Enqueue(int element)
    {
        if (!this->Isfull())
        {
            if (this->frontind == -1)
            {
                frontind++;
            }
            this->backind++;
            this->arr[this->backind] = element;            
        }
        else
        {
            cout << "queue full" << endl;            
        }
    }

    int Dequeue()
    {
        if (!this->Isempty())
        {
            int x = this->arr[this->frontind];
            this->frontind++;
            return x;
        }
        else
        {
            cout << "queue empty" << endl;
            return -1;
        }
    }
    void peak(int index)
    {
        if ((!this->Isempty()))
        {
            if ((index <= this->backind) || (index >= this->frontind))
            {
                cout << "no. at position " << index << " is: " << this->arr[index] << endl;
            }
            else
            {
                cout << "invalid index " << endl;
            }
        }
        else
        {
            cout << "queue empty" << endl;
        }
    }
    void traverse(){
        for(int i = this->frontind; i<= this->backind; i++){
            cout<< this->arr[i] <<" ";
        }
        cout<<""<<endl;
    }
};

int main(int argc, char const *argv[])
{
    queue q1;
    cout<< "Isempty: " <<q1.Isempty() <<endl;
    q1.size = 10;
    q1.arr = new int[q1.size];
    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);
    q1.Enqueue(9);
    q1.Enqueue(0);
    q1.Enqueue(6);
    q1.Enqueue(75);
    q1.Enqueue(889);
    q1.Enqueue(77);
    q1.Enqueue(3);
    q1.traverse();
    q1.Enqueue(3);
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.traverse();
    q1.peak(5);
    cout<< "Isempty: " <<q1.Isempty() <<endl;


    return 0;
}