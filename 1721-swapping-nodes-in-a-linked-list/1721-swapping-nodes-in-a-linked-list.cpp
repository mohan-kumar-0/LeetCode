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
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
        
    ListNode* swapNodes(ListNode* head, int k) {
        int ctr = 0;
        ListNode* tp = head;
        while(tp){
            tp = tp->next;
            ctr++;
        }
        tp = head;
        ListNode* fromLast = head;
        for(int i=1;i<k;++i)
            tp = tp->next;
        ctr = ctr - k;
        for(int i=0;i<ctr;++i)
            fromLast = fromLast -> next;
        ctr = fromLast->val;
        fromLast->val = tp->val;
        tp->val = ctr;
        return head;
    }
};