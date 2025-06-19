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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ptr1=list1;
        ListNode * ptr2=list2;
        if(ptr1 == nullptr && ptr2==nullptr)
        return nullptr;
        else if (ptr1==nullptr && ptr2!=nullptr){
            return ptr2;
        }
        else if(ptr1!=nullptr && ptr2==nullptr){
            return ptr1;
        }        
        ListNode *temp=new ListNode();
        ListNode *final=temp;
        while(ptr1 !=nullptr && ptr2!=nullptr){
            if(ptr1->val<=ptr2->val){
                ListNode * ans=new ListNode(ptr1->val);
                temp->next=ans;
                ptr1=ptr1->next;
            }
            else if(ptr1->val>ptr2->val){
                ListNode * ans=new ListNode(ptr2->val);
                temp->next=ans;
                ptr2=ptr2->next;
            }
            temp=temp->next;
        }
        while(ptr1==nullptr && ptr2!=nullptr){
            ListNode * ans=new ListNode(ptr2->val);
                temp->next=ans;
                ptr2=ptr2->next;
                temp=temp->next;
        }
        while(ptr2==nullptr && ptr1!=nullptr){
            ListNode * ans=new ListNode(ptr1->val);
                temp->next=ans;
                ptr1=ptr1->next;
                temp=temp->next;
        }

        return final->next;
    }
};