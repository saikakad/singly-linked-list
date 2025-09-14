#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node{value, NULL, head};
    if (head != NULL) head->prev = newNode;
    head = newNode;
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    display(head); // 30 <-> 20 <-> 10 <-> NULL
}
