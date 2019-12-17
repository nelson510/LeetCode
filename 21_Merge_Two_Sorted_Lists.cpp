/**
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result = NULL;
        ListNode**current=&result;
        ListNode* x;
        
        while(l1 !=NULL || l2 !=NULL){
            if(l1 !=NULL && l2 !=NULL){
               if(l1->val>=l2->val){
                    *current =new ListNode(l2->val);
                    current=&((*current)->next);
                    l2=l2->next;
               } 
               else{
                    *current=new ListNode(l1->val);
                    current=&((*current)->next);
                    l1=l1->next;
               } 
            
            }
            else if(l1!=NULL && l2==NULL){
                *current=new ListNode(l1->val);
                current=&((*current)->next);
                l1=l1->next;
            }
            else{
                *current =new ListNode(l2->val);
                current=&((*current)->next);
                l2=l2->next;
            }
            
        }
        return result;
    }
};