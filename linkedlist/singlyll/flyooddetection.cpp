#include<iostream>
using namespace std; 

class Node{
    public:
    int data;
    Node* next;
   
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insertAtHead(Node* &head, int d){

    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp =head;

    while (temp!= NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;    
}

Node* floydDetection(Node* head){

    if(head==NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){

        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow==fast){
           
           cout<<"present at "<<slow->data<<endl;
           return slow;
         }
    }

    return NULL;
}

Node* getStartingNode(Node* head){

    if(head==NULL){
        return NULL;
    }

    Node* intersection = floydDetection(head);
     if (intersection == NULL) {
            return NULL; // No cycle
        }
    Node* slow = head;

    while (slow!=intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
    
}

Node removeLoop(Node* head){

    if (head==NULL)
    {
       return;
    }

    Node* startofloop = getStartingNode(head);
    Node* temp = startofloop;

    while(temp->next!=startofloop){
        temp = temp->next;
    }

    temp->next = NULL;
    
}

int main(){
   
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to node1;
    Node* head = node1;
    Node* tail = node1;
    print(head);

    // insertAtHead(head, 12);
    // print(head);

    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    
    tail->next = head->next;
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    if(floydDetection(head)!=NULL){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"no cycle"<<endl;
    }
    
    Node* loop = getStartingNode(head);
    cout<<"loop starts at "<<loop->data<<endl;

    removeLoop(head);
    print(head);
    
    return 0;
}