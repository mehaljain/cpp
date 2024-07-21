#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

};
void print(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
    } 
    cout<<endl;
}

void insertAtHead(Node* &tail,Node* &head,int d){

    //empty list
    if(head == NULL){
      Node* temp = new Node(d);
      head = temp;
      tail = temp;

    }
    else{
        Node* temp = new Node(d);
        temp ->next = head;
        head ->prev = temp;
        head = temp;
    }
}
void insertAtTail(Node* &tail,Node* &head,int d){


    //empty list
    if(tail == NULL){
      Node* temp = new Node(d);
      head = temp;
      tail = temp;
    }
    else{
       Node* temp = new Node(d);
       tail -> next = temp;
       temp -> prev = tail;
       tail = temp;
    }
    
}
void insertAtPosition(Node* &tail,Node* &head, int position, int d){

    if(position==1){
        insertAtHead(tail,head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt< position){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return ;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;

} 
int main(){

    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    insertAtHead(tail,head, 9);
    insertAtHead(tail,head, 8);
    print(head);

    insertAtTail(tail,head,11);
    insertAtTail(tail,head,12);
    print(head);

    insertAtPosition(tail,head,4,13);
    print(head);

    return 0;
}