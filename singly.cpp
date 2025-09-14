#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert at beginning
void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

// Display list
void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    display(head); // 30 -> 20 -> 10 -> NULL
}
