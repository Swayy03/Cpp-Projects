#include <iostream>
#include <stack>
using namespace std;

struct Node{
    int data;
    Node* next;

};
int reverseLinkedList(Node* head);
int main(){
    //iterate through the singly linked list and add all the nodes to a stack
    //iterate through the stack appending the top value as the next node then pop the top
    Node* head = new Node();

    head->data = 20;
    head->next = new Node();
    head->next->data = 30;
    head->next->next = new Node();
    head->next->next->data = 40;

    cout<<reverseLinkedList(head);

    return 0;
}

int reverseLinkedList(Node* head){
    stack<Node*> st;
    while(head!=nullptr){
        st.push(head);
        head = head->next;
    }
    Node* root = st.top();
    st.pop();
    head = root;
    while(!st.empty()){
        head->next = st.top();
        st.pop();
        head = head->next;
    }
    head->next = nullptr;
    return root->data;

}
