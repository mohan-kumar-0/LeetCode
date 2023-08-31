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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr)
            return nullptr;
        ListNode *slowPtr = head;
        ListNode *fastPtr = head->next;
        ListNode *prev;
        while(fastPtr!=nullptr){
            fastPtr = fastPtr->next;
            prev = slowPtr;
            slowPtr = slowPtr->next;
            if(fastPtr!=nullptr)
                fastPtr = fastPtr->next;
        }
        prev->next = slowPtr->next;
        delete slowPtr;
        return head;
    }
};