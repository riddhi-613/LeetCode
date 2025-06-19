/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * headA_temp=headA;
        ListNode * headB_temp=headB;
        while(headA_temp!=headB_temp){
            headA_temp=headA_temp? headA_temp->next:headB;
            headB_temp=headB_temp? headB_temp->next:headA;
            
        }
        return headA_temp;
    }
};