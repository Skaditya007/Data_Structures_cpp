#include <bits/stdc++.h>
using namespace std;

struct Stack {
    int data;
    Stack* next;
};

Stack* Top = NULL;

// Push element at top
void push(int data) {
    Stack* new_node = new Stack;
    if (new_node == NULL) {
        cout << "Overflow" << endl;
        exit(1);
    }
    new_node->data = data;
    new_node->next = Top;
    Top = new_node;
}

// Pop element from top
void pop() {
    if (Top == NULL) {
        cout << "Underflow" << endl;
        exit(1);
    }
    Stack* temp = Top;
    Top = Top->next;
    delete temp;
}

// Display stack from top to bottom
void display() {
    Stack* temp = Top;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    push(20);
    push(10);
    cout << "Stack after inserting 20 and 10: " << endl;
    display();

    push(5);
    push(1);
    cout << "Stack after inserting 5 and 1: " << endl;
    display();

    pop();
    cout << "Stack after performing one pop operation: " << endl;
    display();

    return 0;
}