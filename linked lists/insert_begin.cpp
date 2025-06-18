/*Algorithm
1.Make the first node of Linked List linked to the new node
2.Remove the head from the original first node of Linked List
3.Make the new node as the Head of the Linked List.
*/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

// Creating node at the front
Node* insert_front(Node *head, int new_data) {

    Node *new_node = new Node(new_data);
    new_node->next = head; // Linking new node to the previous head

    return new_node;       // Returning the new head
}

// Print function
void print(Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        cout << " " << curr->data;
        curr = curr->next;  // Move to next node
    }
    cout << endl;
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    // Print the original list
    cout << "Original Linked List:";
    print(head);

    // Insert a new node at the front of the list
    cout << "After inserting Nodes at the front:";
    int data = 1;
    head = insert_front(head, data);

    // Print the updated list
    print(head);

    return 0;
}