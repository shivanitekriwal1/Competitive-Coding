#include <iostream>
using namespace std;

struct node{
    int key;
    struct node *next;
};

void push(struct node **head, int data){
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->key = data;
    new_node->next = *head;
    *head = new_node;
}

void printNthfromlast(struct node *head, int n){
    int len=0, i;
    struct node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    if(len<n)
        return;
    temp = head;
    for(int j=1; j<(len-n+1); j++)
        temp = temp->next;
    cout << temp->key;
    
    return;
}


int main() {
    
    struct node *head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 35);
     
    printNthfromlast(head, 4);
    return 0;
}