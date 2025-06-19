/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode * ans=head;
        ListNode *temp=new ListNode();
        ListNode *duplicateFreeList=temp;
        while(ans){
            if(ans->next!=nullptr && ans->val==ans->next->val ){
               
            }
            else if( ans->next==nullptr){
                ListNode * temp1=new ListNode(ans->val);
                temp->next=temp1;
                temp=temp->next;
            }
            else{
                ListNode * temp1=new ListNode(ans->val);
                temp->next=temp1;
                temp=temp->next;
            }
            ans=ans->next;
        }
        return duplicateFreeList->next;
    }
};