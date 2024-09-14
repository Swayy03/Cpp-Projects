/*

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

};

Node* createNode(int data){
    Node* node = new Node();
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

void printTree(Node* root){
    queue<Node*> nodes;
    nodes.push(root);
    while(!nodes.empty()){
        if(nodes.front()->left != nullptr) nodes.push(nodes.front()->left);
        if(nodes.front()->right != nullptr) nodes.push(nodes.front()->right);
        cout<<nodes.front()<<",";
        nodes.pop();
    }



}
int main(){
    //Depth first search
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->left->right->left = createNode(9);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    root->right->right->left = createNode(15);

    printTree(root);

    return 0;
}
*/
