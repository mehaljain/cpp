#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;

        if(this->data != NULL){
           delete next;
           next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void insertAtTail(Node* &tail,int element,int d){

    //empty 
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element){
            curr = curr -> next;
        }

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr ->next = temp;

    }     
}
void print(Node* &tail){
    Node* temp =tail;
    
    //empty list
    if(tail == NULL){
        cout<<"list is empty "<<endl;
        return;
    }

    do
    {
        cout<<tail -> data<<" ";
        tail = tail -> next;
    }while (tail!= temp);
    cout<<endl;
      
}

void deleteAtNode(Node* &tail,int value){
    //empty list
    if(tail == NULL){
        cout<<" List is empty, please check again "<<endl;
        return ;
    }
    else{
        //non-empty
        //assuming that "value" is present in the linked list

        Node* prev = tail;
        Node* curr = prev -> next;

        while (curr->data!=value)
        {
            /* code */
            prev = curr;
            curr = curr->next;
        }

        prev -> next = curr -> next;
        
        //1 node ll
        if(curr == prev){
            tail = NULL;
        }

        //>=2 node linked list
        if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}
int main(){

    Node* tail = NULL;

    insertAtTail(tail,5,3);
    insertAtTail(tail,3,4);
    insertAtTail(tail,4,7);
    insertAtTail(tail,7,8);
    print(tail);

    // deleteAtNode(tail,3);
    print(tail);

    return 0;

}