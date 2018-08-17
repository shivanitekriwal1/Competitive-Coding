#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void push(struct node** head, int key){
    struct node * new_node = (struct node*) malloc (sizeof(struct node));
    new_node-> data = key;
    new_node->next = *head;
    *head = new_node;
}

void removeduplicates(struct node * head){
    struct node * curr = head;
    if(curr==NULL)
        return;
    struct node* next_curr;
    while(curr->next!=NULL){
        if(curr->data == curr->next->data){
            next_curr = curr->next->next;
            free(curr->next);
            curr->next = next_curr;
        }
        else
            curr = curr->next;
    }
}

void printlist(struct node *head){
    struct node* curr = head;
    while(curr!=NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main(){
    struct node *head = NULL;
    push(&head, 20);
    push(&head, 13);
    push(&head, 13);  
    push(&head, 11);
    push(&head, 11);
    push(&head, 11);                                    
 
    printlist(head); 
 
    /* Remove duplicates from linked list */
    removeduplicates(head); 

    printlist(head);            
   
    return 0;
}