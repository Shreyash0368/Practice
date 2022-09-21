#include <iostream>
using namespace std;


class list{
    public:
        
    int data;
    class list * next;
    friend void traversal( list * ptr){
        list* p = ptr;
        while (p != NULL)
        {
            cout<<" "<< p -> data ;
            p = p -> next;
        }     
        cout<<""<<endl;   
    }
    friend list * insertStart(list * head,int element){
        list * ptr = new(list);
        ptr->next = head;
        ptr -> data = element;

        return ptr;
    }
    friend list * insertAtIndex(list * head,int element, int index){
        list * ptr = new(list);
        list * p = head;
        int i = 0;
        while (i != index -1)
        {
            p = p -> next;
            i++;
        }
        ptr -> next = p -> next;
        p -> next = ptr;
        ptr -> data = element;

        return head;
    }
    friend list * insertEnd(list * head,int element){
        list * ptr = new(list);
        list * p = head;
        while (p -> next != NULL)
        {
            p = p-> next;
        }
        p -> next = ptr;        
        ptr -> data = element;
        ptr -> next = NULL;

        return head;
    }

    friend list * insertAfterNode(list * head, int element, list * prev_node){
        list * ptr = new(list);
        ptr -> next = prev_node -> next;
        ptr -> data = element;
        prev_node -> next = ptr;

        return head;
    }

    friend list * deleteStart(list * head){
        list * ptr = head;
        head = head->next;
        free(ptr);
        return head;
    }
    friend list * deleteIndex(list * head,  int index){
        list * ptr = head;
        list * p = head;
        for (int i = 0; i < index ; i++)
        {
            p = ptr; // 0 1 2
            ptr = ptr -> next; // 1 2 3
        }
        p -> next = ptr -> next;
        free(ptr);
        return head;        
    }
    friend list * deleteData(list * head, int element){
        list * ptr = head;
        list * p = ptr;
        while (ptr -> data != element)
        {
            p = ptr;
            ptr = ptr ->next;
        }
        p -> next = ptr ->next;
        free(ptr);
        return head;        
    }
};

int main(int argc, char const *argv[])
{
    list * head;
    list * second;
    list * third;

    head = new(class list);
    second = new(class list);
    third = new(class list);

    head->data = 0;
    head->next = NULL;
    traversal(head);
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 2);
    insertEnd(head, 2);
    
    traversal(head);

    // head ->data = 11;
    // head ->next = second;

    // second ->data = 18;
    // second ->next = third;

    // third ->data = 81;
    // third ->next = NULL;

    // traversal(head);
    
    // head = insertStart(head, 34);
    // cout<<"Insert at heaD: ";   
    // traversal(head);
    
    // insertAtIndex(head, 94, 2);
    // cout<<"Insert at index 2: ";   ;
    // traversal(head);
    
    // insertEnd(head, 111);
    // cout<<"Insert at end: ";
    // traversal(head); 
    
    // insertAfterNode(head, 23, second);
    // cout<<"Insert after node 'second': ";
    // traversal(head); 

    // head = deleteStart(head);
    // cout<<"Delete at head: ";
    // traversal(head); 

    // head = deleteIndex(head, 3);
    // cout<<"Delete at index 3: ";
    // traversal(head); 

    // head = deleteData(head, 111);
    // cout<<"Delete element 111: ";
    // traversal(head); 
    
    return 0;
}