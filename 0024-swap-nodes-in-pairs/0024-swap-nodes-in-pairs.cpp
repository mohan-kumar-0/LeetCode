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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr)
            return head;
        if(head->next==nullptr)
            return head;
        ListNode* prevNode = nullptr;
        ListNode* currNode = head;
        ListNode* nextNode = head->next;
        head = nextNode;
        while(currNode!=nullptr && nextNode!=nullptr){
            if(prevNode!=nullptr)
                prevNode->next = nextNode;
            currNode->next = nextNode->next;
            nextNode->next = currNode;
            prevNode = currNode;
            currNode = currNode->next;
            if(currNode!=nullptr)
                nextNode = currNode->next;
        }
        return head;
    }
};