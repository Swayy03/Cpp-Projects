#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

};

Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right= nullptr;
    return newNode;
}

void printTree(Node* root){
    if(root == nullptr) return;
    cout<<root->data<<",";
    printTree(root->left);
    printTree(root->right);

}


int main()
{
    //level 1
    Node* root = createNode(1);

    //level 2
    root->left= createNode(2);
    root->right = createNode(3);

    //level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    //level 4
    root->right->right->left = createNode(15);
    root->left->right->left = createNode(9);
    printTree(root);
    return 0;
}
