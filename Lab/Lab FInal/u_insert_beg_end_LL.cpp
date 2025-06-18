#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *create_node(int data){
    Node *new_node = new Node;
    if(new_node == nullptr){
        cout << "Overflow" << endl;
        exit(1);
    }
    new_node -> data = data;
    new_node -> next = nullptr;
    return new_node;
}

Node *insert_begin(Node *head, int data){
    Node *temp = create_node(data);
    temp -> next = head;
    return temp;
}

void insert_end(Node *head, int data){
    Node *n_node = create_node(data);  // FIXED
    Node *temp = head;
    while(temp -> next != nullptr){
        temp = temp -> next;
    }
    temp -> next = n_node;
}


void print(Node *head){
    Node *temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp ->next;
    }
    cout << endl;
}

int main(){
    Node *head = create_node(20);
    Node *b = create_node(30);
    head -> next = b;

    print(head);

    head = insert_begin(head, 10);
    print(head);

    insert_end(head, 40);
    print(head);

    return 0;
}
