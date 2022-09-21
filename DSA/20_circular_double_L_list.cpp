#include <iostream>
using namespace std;

class Cnode{
    public:
    int data;    
    Cnode* next;

    friend void traversal( Cnode * ptr){ 
        Cnode * p = ptr;     
        do{
            cout<<" "<<p->data;
            p = p->next;
        } while (p  != ptr);           
        cout<<""<<endl;   
    }

    friend Cnode * insertHead(Cnode * head, int element){
        Cnode* ptr = head;
        Cnode * p =new(Cnode);
        do{
            ptr = ptr->next;
        } while (ptr -> next != head);
        p -> next = ptr ->next;
        ptr ->next = p;
        p->data = element;  
        return head;
    }
    
};

class Dnode
{
public:
    int data;
    Dnode *next;
    Dnode * prev;

    friend void traverseD(Dnode *head)
    {
        Dnode *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout<<""<<endl;
    }
    friend Dnode *InsertHeadD(Dnode *head, int element)
    {

        Dnode *ptr = new (Dnode);
        ptr->data = element;
        ptr->next = head;
        head -> prev = ptr;
        ptr -> prev = NULL;
        head = ptr;
        return head;
    }
    friend Dnode *InsertIndexD(Dnode *head, int element, int index)
    {
        Dnode *ptr = new (Dnode);
        ptr->data = element;
        Dnode *p = head;
        Dnode *p2;
        int i = 0;
        while (i != index )
        {
            p2 = p;
            p = p->next;
            i++;
        }
        ptr->next = p2->next;
        p2->next = ptr;
        ptr -> prev = p2;
        p -> prev = ptr;
        return head;
    }
    friend Dnode * InsertEndD(Dnode *head, int element){
        Dnode * ptr = new(Dnode);
        Dnode * p = head;
        while (p ->next != NULL)
        {
            p = p->next;
        }
    
        p->next = ptr ;
        ptr->data = element;
        ptr ->next = NULL;
        ptr->prev = p;
        
        return head;
    }
    friend Dnode * DeleteheadD(Dnode *head){
        Dnode * ptr = head;
        head = head->next;
        head->prev = NULL;
        free(ptr);
        return head;
    }
    friend Dnode * DeleteEndD(Dnode *head){
        Dnode * ptr = head;
        Dnode * p;
        while (ptr -> next != NULL)
        {
            p = ptr;
            ptr = ptr ->next ;
        }
        p -> next = NULL;
        free(ptr);
        return head;    
    }
    friend Dnode * DeleteDataD(Dnode *head, int element){
        Dnode * ptr = head;
        Dnode * p;
        while ((ptr -> data != element) || (ptr != NULL))
        {
            p = ptr;
            ptr = ptr ->next ;
        }
        Dnode * p2 = ptr -> next;
        p -> next = ptr -> next;
        p2 -> prev = p;
        free(ptr);
        return head;    
    }

};

int main(int argc, char const *argv[])
{
    Cnode * head = new(Cnode);
    Cnode * second = new(Cnode);
    Cnode * third = new(Cnode);
    Cnode * fourth = new(Cnode);

    head ->next = second;
    head ->data = 1;
    second ->next = third;
    second ->data = 2;
    third ->next = fourth;
    third ->data = 3;
    fourth ->next = head;
    fourth ->data = 4;
    traversal(head);

    insertHead(head, 22);
    traversal(head);

    cout<<"--------------"<<endl;
    cout<<"--------------"<<endl;

    Dnode * first = new(Dnode);
    first->next = NULL;
    first->prev = NULL;
    first ->data = 0;
    
    traverseD(first);
    InsertEndD(first, 1);
    InsertEndD(first, 2);
    InsertEndD(first, 3);
    InsertEndD(first, 4);
    InsertEndD(first, 5);
    traverseD(first);

    

    
    return 0;
}