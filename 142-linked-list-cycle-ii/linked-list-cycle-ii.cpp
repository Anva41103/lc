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
    ListNode *detectCycle(ListNode *head) {
        map <ListNode*,int> m;
        if(head==NULL) return head;
        ListNode* temp=head;
        while(temp->next!=NULL)
        {
            if(m[temp]>=1) return temp;
            m[temp]++;
            temp=temp->next;
        }
        return NULL;
    }
};