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
        int ans = 0;
        ListNode *slowptr = head;
        ListNode *fastptr = head->next;
        ListNode *prev;
        ListNode *curr;
        ListNode *curr2;
        //find the mid
        while(fastptr!=nullptr){
            fastptr = fastptr->next;
            if(fastptr!=nullptr)
                fastptr = fastptr->next;
            prev = slowptr;
            slowptr = slowptr->next;
        }
        //split the list in two
        ListNode *head2 = slowptr;
        prev->next = nullptr;
        //reverse second list
        curr = head2;
        slowptr = head2;
        while(curr!=nullptr){
            prev = curr;
            curr = curr->next;
            prev->next = head2;
            head2 = prev;
        }
        slowptr->next=nullptr;
        //calculate max sum
        curr = head;
        curr2 = head2;
        while(curr!=nullptr){
            ans = max(ans,curr->val+curr2->val);
            curr = curr->next;
            curr2 = curr2->next;
        }
        return ans;
    }
};