#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *create_node(int data) {
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = nullptr;
    return new_node;
}

Node *insert_pos(Node *head, int data, int pos) {
    Node *new_node = create_node(data);  //create new node

    if (pos == 1) {
        new_node->next = head;
        return new_node;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) return head;  // position out of range

    new_node->next = temp->next;
    temp->next = new_node;

    return head;
}

void print(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = create_node(10);
    Node *b = create_node(20);
    head->next = b;

    print(head);  // 10 20

    head = insert_pos(head, 25, 2);  // insert 25 at position 2
    print(head);  // 10 25 20

    return 0;
}
