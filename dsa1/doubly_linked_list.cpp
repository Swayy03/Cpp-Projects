/*
#include <iostream>


class Node{
public:
    int value;
    Node* next;
    Node* previous;
};
using namespace std;
void addNode(int val);
void addHeadNode(int val);
void printDoublyLinkedList(Node* n);
int main(){
    Node* head;
    Node* tail;

    Node* node = new Node();
    node->value = 4;
    node->next = nullptr;
    node->previous = nullptr;
    head = node;
    tail = node;
    printDoublyLinkedList(head);

    return 0;
}

void printDoublyLinkedList(Node* n){
    cout<<n->value<<endl;
    Node* nextNode = n->next;
    while(nextNode->next!=nullptr){
        cout<<nextNode->value<<endl;
    }
}
void addNode(int val){}
*/
