/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* temp = A;
    int len=0; 
    
    if (A==NULL)
        return A;
    
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    
    if(B==0)
        B=1;
        
    int rem = len-B;
    
    if(rem<=0)
        return A->next;
        
    
    
    temp = A;
    ListNode *prev;
    while(rem>0){
        prev = temp;
        temp = temp->next;
        rem--;
    }
    prev->next = temp->next;
    return A;
}
