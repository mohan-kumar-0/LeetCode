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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode* tp = head->next;
        ListNode* newHead = head;
        while(head->next){
            tp = head->next;
            head->next = head->next->next;
            tp->next = newHead;
            newHead = tp;
        }
        return newHead;
    }
};