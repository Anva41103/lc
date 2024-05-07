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
    int pairSum(ListNode* head) {
        ListNode* f=head;
        ListNode* s=head;
        stack <int> st;
        while(f!=NULL)
        {
            st.push(s->val);
            s=s->next;
            f=f->next->next;
        }
        int m=-1e9;
        while(s!=NULL)
        {
            m=max(m,st.top()+s->val);
            s=s->next;
            st.pop();
        }
        return m;
    }
};