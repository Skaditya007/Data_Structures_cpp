#include <bits/stdc++.h> 
using namespace std;

#define ll long long 
#define nl '\n'  

class Node { 
public:    
    int data;    
    Node *next;    

    Node(int new_data) { 
        data = new_data;  
        next = nullptr;    
    } 
};  

bool search_item(Node *head, int item) {  

    // Set current element to head  
    
    Node *curr = head;  

    while (curr != nullptr) {  
        if (curr->data == item) {  
            return true;  
        }  
        curr = curr->next;  
    }  
    return false;  
}  

int main() {  

    // Insert items  

    Node* head = new Node(14);  
    head->next = new Node(21);  
    head->next->next = new Node(13);  
    head->next->next->next = new Node(30);  
    head->next->next->next->next = new Node(10);  

    // Item to search in the linked list  

    int item = 14;  

    if (search_item(head, item))  
        cout << "Yes";  
    else  
        cout << "No";  

    return 0;  
}