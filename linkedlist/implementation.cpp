#include<iostream> 
using namespace std;


//-----------------------implementation--------------------
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
int main(){
    //  without constructor
    // Node* node1 = new Node();
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    // with constructor
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    return 0;
}

