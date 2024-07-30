#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};


ListNode* deleteDuplicates(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr && current->next != nullptr) {
        if (current->val == current->next->val) {
            ListNode* duplicate = current->next;
            current->next = current->next->next;
            delete duplicate;
        } else {
            current = current->next;
        }
    }
    return head;
}


void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}


void insertNode(ListNode*& head, int val) {
    if (head == nullptr) {
        head = new ListNode(val);
    } else {
        ListNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new ListNode(val);
    }
}

int main() {
    ListNode* head = nullptr;


    insertNode(head, 1);
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 3);

    cout << "Original list: ";
    printList(head);

    head = deleteDuplicates(head);

   cout << "List after removing duplicates: ";
    printList(head);

    return 0;
}
