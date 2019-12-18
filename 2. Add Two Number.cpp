/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result =NULL; //null pointer
        ListNode **current=&result; //pointer to null pointer
        int sum;
        int flow = 0;
        while (l1 != NULL || l2 != NULL || flow > 0){
            sum = flow; // reset the sum
            if(l1 != NULL){
                sum = sum+l1->val;
                l1=l1->next;
            }
            if(l2 != NULL){
                sum = sum+l2->val;
                l2=l2->next;
            }
            flow = 0;
            if(sum >= 10){
                flow = 1;
                sum=sum-10 ;
            }
            (*current)= new ListNode(sum); //because current = &result therefore *current = &result's value = NULL so NULL become new List(sum)
            current=&((*current)->next); //move to next ListNode
        }
        return result;
    }
};
