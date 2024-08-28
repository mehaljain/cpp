#include<iostream>
#include<queue>
using namespace std;

class Node{

    public:
      int data; 
      Node* left;
      Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// void levelorderTraversal(Node* &root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()) {
//         Node* temp = q.front();
//         q.pop();

//         if(temp==NULL){
//             //purana level complete traverse ho chuka hai
//             cout<<endl;
//             if(!q.empty()){
//                 //queue still has some child nodes
//                 q.push(NULL);
//             }
//         }else{

//             cout<<temp->data<<" ";

//             if(temp->left){
//               q.push(temp->left);
//             }


//             if(temp->right){
//               q.push(temp->right);
//             }
//         }
//     }
// }

Node* insertIntoBST(Node* &root, int data){

    //base case
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    
    if(data <= root->data){
        root->left = insertIntoBST(root->left, data);

    }else{
        root->right = insertIntoBST(root->right, data);
    }

    return root;

}

Node* minVal(Node* &root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }

    return temp;
}

Node* maxVal(Node* &root){
    Node* temp = root;
    while(temp->right!= NULL){
        temp = temp->right;
    }

    return temp;
}
void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        insertIntoBST(root, data);
        cin>>data;
    }

}

int main(){

    Node* root = NULL;
    cout<<"Enter data to create BST"<<endl;
    takeInput(root);

    cout<<"Printing the BST"<<endl;
    // levelorderTraversal(root);

    cout<<minVal(root)->data;
    cout<<maxVal(root)->data;
    
    return 0;
}