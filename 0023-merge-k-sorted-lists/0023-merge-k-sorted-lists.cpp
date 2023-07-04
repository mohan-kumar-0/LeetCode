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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* res = nullptr;
        ListNode* temp = nullptr;
        ListNode* curr = nullptr;
        bool hasMore = true;
        int n = lists.size();
        int mn = 0;
        while(hasMore){
            hasMore = false;
            mn = -1;
            for(int i=0;i<n;++i){
                if(lists[i]!=nullptr){
                    hasMore = true;
                    if(mn==-1 || lists[i]->val < lists[mn]->val)
                        mn = i;
                }
            }
            if(hasMore && res==nullptr){
                res = curr = lists[mn];
                lists[mn] = lists[mn]->next;
            }
            else if(hasMore){
                curr->next = lists[mn];
                curr = curr->next;
                lists[mn] = lists[mn]->next;
            }
        }
        return res;
    }
};