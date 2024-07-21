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

bool isCircular(Node* &head){

    if(head==NULL){
        return true;
    }

    Node* temp = head->next;
    while(temp!=NULL && temp!=head){
        temp = temp->next;

    }

    if(temp==head){
        return true;
    }

    return false;
}

int main(){

    Node* tail = NULL;

    insertAtTail(tail,5,3);
    insertAtTail(tail,3,4);
    insertAtTail(tail,4,7);
    insertAtTail(tail,7,8);
    print(tail);

    if(isCircular(tail)){
        cout<<"circular"<<endl;
    }else{
        cout<<"not circular"<<endl;
    }

    return 0;

}