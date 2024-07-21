#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){

        int value = this -> data;
        //memory free
        if(this->next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }

};
void insert(Node* &head, int d){

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}
void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void deletenode(int position, Node* &head){

    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        temp = head->next;
  
        //memory free start node
        temp->next = NULL;
        delete temp;
    }else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr -> next = NULL;
        delete curr;

    }
}
// void del(Node* &head, int d){
         
//       Node* temp = new Node(d);

// }
int main(){

    Node* node1 = new Node(10);
    
    Node* head = node1;
    // print(head);

    insert(head,12);
    insert(head,13);
    insert(head,14);
    insert(head,15);
    print(head);

    // cout<<"head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;
    
    deletenode(2,head);
    print(head);

}