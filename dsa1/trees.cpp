/*
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;
#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Function to merge two sorted linked lists
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    // Create a dummy node to simplify the merge process.
    ListNode dummy;
    ListNode* tail = &dummy;

    // Traverse both lists, adding the smaller value to the merged list.
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val <= l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    // If one of the lists is not empty, append it to the result.
    if (l1 != nullptr) {
        tail->next = l1;
    } else {
        tail->next = l2;
    }

    return dummy.next;
}

// Function to print a linked list
void printList(ListNode* node) {
    while (node != nullptr) {
        std::cout << node->val << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create the first linked list: 1 -> 2 -> 4
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);

    // Create the second linked list: 1 -> 3 -> 4
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    // Merge the two linked lists
    ListNode* mergedList = mergeTwoLists(l1, l2);

    // Print the merged linked list
    printList(mergedList);

    // Clean up the allocated memory
    while (mergedList != nullptr) {
        ListNode* temp = mergedList;
        mergedList = mergedList->next;
        delete temp;
    }

    return 0;
}
*/
