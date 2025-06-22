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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ptr1=l1;
        ListNode * ptr2=l2;
        ListNode* temp=new ListNode();
        ListNode *finalList=temp;
        int carry=0;
        if(ptr1==nullptr && ptr2==nullptr){
            return nullptr;
        }else if (ptr1==nullptr && ptr2!=nullptr){
            return ptr2;
        }else if(ptr1!=nullptr && ptr2==nullptr){
            return ptr1;
        }else{
            while(ptr1 != nullptr && ptr2!=nullptr){
                int digitInt=ptr1->val+ptr2->val+carry;
                ListNode * digit=new ListNode(digitInt);
                temp->next=digit;
                temp=temp->next;
                if(temp->val>=10){
                    temp->val=(digit->val%10);
                    carry=1;
                }
                else{
                    carry=0;
                }
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
            while(ptr1 !=nullptr && ptr2==nullptr){
                int digitInt=ptr1->val+carry;
                ListNode * digit=new ListNode(digitInt);
                temp->next=digit;
                temp=temp->next;
                if(temp->val>=10){
                    temp->val=(digit->val%10);
                    carry=1;
                }else{
                    carry=0;
                }
                ptr1=ptr1->next;
                }
            while(ptr1==nullptr && ptr2!=nullptr){
                int digitInt=ptr2->val+carry;
                ListNode * digit=new ListNode(digitInt);
                temp->next=digit;
                temp=temp->next;
                if(temp->val>=10){
                    temp->val=(digit->val%10);
                    carry=1;
                }else{
                    carry=0;
                }
                ptr2=ptr2->next;
                }
            }
            if(carry==1){
                ListNode *digit=new ListNode(1);
                temp->next=digit;
                temp=temp->next;
            }

        return finalList->next;}
    
        
};