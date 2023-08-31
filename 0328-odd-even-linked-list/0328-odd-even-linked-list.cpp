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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode *even = head;
        ListNode *odd = head->next;
        ListNode *evenptr = even;
        ListNode *oddptr = odd;
        ListNode *curr = oddptr;
        while(curr!=nullptr){
            if(curr!=nullptr){
                curr = curr->next;
                if(curr!=nullptr){
                    evenptr->next = curr;
                    evenptr = evenptr->next;
                }
            }
            if(curr!=nullptr){
                curr = curr->next;
                oddptr->next = curr;
                oddptr = oddptr->next;
            }
        }
        evenptr->next = odd;
        return even;
    }
};