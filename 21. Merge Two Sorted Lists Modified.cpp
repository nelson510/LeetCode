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

//In this recursion no need to create a new ListNode, because we can simply relocation the existing one to achieve the goal.
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        
        if(l2->val>=l1->val){
            l1->next=mergeTwoLists(l1->next,l2);
            return l1;
        }
        if(l2->val<=l1->val){
            l2->next=mergeTwoLists(l1,l2->next);
            return l2;
        }
        return NULL; //if the retrun statement will never reach, we can return NULL
    }
};