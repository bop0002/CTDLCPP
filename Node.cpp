#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

int main() {
    node *head = new node;
    head->data = 100;
    head->next = NULL;
    
    node *second = new node;
    second->data = 200;
    second->next = NULL;
    head->next = second;
    
    node *third = new node;
    third->data = 300;
    third ->next = NULL;
    second->next = third;
    
    cout<<head->data<<endl;
    cout<<second->data<<endl;
    cout<<third->data<<endl;

    return 0;
}

