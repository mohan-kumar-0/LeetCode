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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
         return NULL;
        int start=k;
        ListNode *t=head;
        while(start>0&&t!=NULL)
        {
            t=t->next;
            start--;
        }
        if(start==0)
        {
        ListNode *pre=NULL;
        ListNode *curr=head;
        ListNode *nex=NULL;
        int count=0;
        while(curr!=NULL&&count<k)
        {
            nex=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nex;
            count++;
        } 
        if(nex!=NULL)
         head->next=reverseKGroup(nex,k);
        return pre;
    }
    return head;
    }
};