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
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    bool hasCycle(ListNode *head) {
        
        ListNode *slowptr = head;
        ListNode *fastptr = head;
        if(head==nullptr || head->next==nullptr)
            return false;
        while(slowptr!=nullptr && fastptr!=nullptr){
            if(fastptr->next!=nullptr)
                fastptr = fastptr->next->next;
            else
                fastptr = fastptr->next;
            slowptr = slowptr->next;
            if(slowptr==fastptr)
                return true;
        }
        return false;
    }
};