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
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        if(head==nullptr){
            return 0;
        }
        int count=-1;
        int binaryToIntNum=0;
        ListNode *run_count=head;
        while(run_count){
            count++;
            run_count=run_count->next;
        }
        while(temp){
             if(temp->val==1){
                binaryToIntNum=binaryToIntNum+pow(2,count);
            }
            temp=temp->next;
            count--;
        }
        return binaryToIntNum;
    }
};