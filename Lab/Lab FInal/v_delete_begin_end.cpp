#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *create_node(int data){
    Node *new_node = new Node;
    new_node -> data = data;
    new_node -> next = nullptr;
    return new_node;
}

void print(Node *head){
    Node *temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node *delete_begin(Node *head){
    if(head == nullptr) return nullptr;
    Node *temp = head;
    head = head -> next;
    delete temp;
    return head;
}

Node *delete_end(Node *head, int data){
    Node *temp = head;
    while(temp -> next -> next != nullptr){
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = nullptr;
}

int main(){
    Node *head = create_node(10);
    Node *b = create_node(20);
    head -> next = b;

    print(head);

    head = delete_begin(head);
    print(head);

    delete_end(head, 20);
    print(head);

    return 0;
}