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

void insertAtHead(Node* &head,int d){

    Node* temp = new Node(d);
    temp ->next = head;
    head ->prev = temp;
    head = temp;
}
void insertAtTail(Node* &tail,int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
void insertAtPosition(Node* &tail,Node* &head, int position, int d){

    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt< position){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,d);
        return ;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;

} 
int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    insertAtHead(head, 9);
    insertAtHead(head, 8);
    print(head);

    insertAtTail(tail,11);
    print(head);

    insertAtPosition(tail,head,4,13);
    print(head);

    return 0;
}