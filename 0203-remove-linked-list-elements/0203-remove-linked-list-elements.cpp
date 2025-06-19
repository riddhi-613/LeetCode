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
    ListNode* removeElements(ListNode* head, int val) {
        if (head==nullptr){
        return nullptr;
        }
        ListNode *ans=head;
        ListNode *temp=new ListNode();
        ListNode * final_list=temp;
        while(ans){
            if(ans->val==val && ans->next!=nullptr){
                
            }
            else if(ans->val==val && ans->next==nullptr){
                temp->next=nullptr;
            }
            else{
                ListNode * final1=new ListNode(ans->val);
                temp->next=final1;
                temp=temp->next;
            }
            ans=ans->next;
        }
        return final_list->next;
    }
};