#include <iostream>
using namespace std;

struct node{
    int key;
    struct node *next;
};

void push(struct node** head_ref, int data){
    struct node *new_node = (struct node*) malloc (sizeof(struct node));
    new_node->key = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

int count(struct node *head, int data){
    struct node* curr = head;
    int count=0;
    while(curr!=NULL){
        if(curr->key == data)
            count++;
        curr = curr->next;
    }
    return count;
}

int main()
{
    struct node* head = NULL;
 
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);
 
    cout << count(head, 1);
    return 0;
}
