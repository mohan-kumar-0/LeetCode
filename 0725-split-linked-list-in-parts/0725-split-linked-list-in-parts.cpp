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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int size = 0;
        ListNode* tp = head;
        while(tp!=NULL){
            tp = tp->next;
            ++size;
        }
        int len = size/k;
        int extras = size%k;
        tp = head;
        int l=0;
        vector<ListNode*> ans;
        for(int i=0;i<k;++i){
            tp = head;
            ans.push_back(head);
            for(int j=0;j<(len-1 + (int)(i<extras)) && tp!=NULL;++j){
                tp = tp->next;
            }
            if(tp!=NULL){
                head = tp->next;
                tp->next = NULL;
            }
        }
        return ans;
    }
};