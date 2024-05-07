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
    ListNode* doubleIt(ListNode* head) {
        ListNode* curr=head;
        ListNode* pre=NULL;
        while(curr!=NULL)
        {
            int tv=curr->val*2;
            if(tv<10)
            {
                curr->val=tv;
            }
            else if(pre!=NULL)
            {
                pre->val+=1;
                curr->val=tv%10;
            }
            else
            {
                head =new ListNode (1,curr);
                curr->val= tv%10;
            }
            pre=curr;
            curr=curr->next;
        }
        return head;
    }
};