#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
    public:
       int data;
       node* left;
       node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right "<<data<<endl; 
    root->right = buildTree(root->right);

    return root;
}

void reverseLevelOrderTraversal(node* root){
    queue<node*>q;
    stack<int>s;
    q.push(root);

    while(!q.empty()) {
        int size = q.size();
        for(int i=0; i<size; i++) {
            node* temp = q.front();
            q.pop();
            s.push(temp->data);

            if(temp->left){
              q.push(temp->left);
            }

            if(temp->right){
              q.push(temp->right);
            }
        }

        while(!s.empty()) {
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }
}

int main(){
    node* root = NULL;
    
    
    cout<<"Enter the data: "<<endl;
    root = buildTree(root);
    
    reverseLevelOrderTraversal(root);

    return 0;
}