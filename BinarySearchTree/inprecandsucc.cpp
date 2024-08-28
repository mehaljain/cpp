#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int item) {
        key = item;
        left = nullptr;
        right = nullptr;
    }
};

// Function to find the predecessor and successor
// of a given key in BST
void findPreSuc(Node* root, int key, Node*& pre, 
                                     Node*& suc)
{
    // If root is null, return
    if (!root)
        return;

    // Traverse the left subtree
    findPreSuc(root->left, key, pre, suc);

    // The first greater value seen is successor
    if (root->key > key)
    {        
        if (!suc || (suc && suc->key > root->key))
            suc = root;
    }
  
    // The last smaller value seen is predecessor
    else if (root->key < key)
        pre = root;

    // Traverse the right subtree
    findPreSuc(root->right, key, pre, suc);
}

// A utility function to insert a new node with
// given key in BST
Node* insert(Node* node, int key)
{
    if (node == nullptr) return new Node(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}

// Driver code to test the above function
int main()
{
    int key = 65;    
    /* Let us create the following BST
              50
           /      \
          30      70
         /  \    /  \
       20   40  60   80 */
    Node *root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    Node* pre = nullptr;
    Node* suc = nullptr;

    findPreSuc(root, key, pre, suc);

    if (pre != nullptr)
        cout << "Predecessor is " << pre->key << endl;
    else
        cout << "No Predecessor" << endl;

    if (suc != nullptr)
        cout << "Successor is " << suc->key << endl;
    else
        cout << "No Successor" << endl;

    return 0;
}
