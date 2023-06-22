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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr)
            return list2;
        if(list2==nullptr)
            return list1;
        ListNode* mergedList;
        if(list1->val < list2->val){
            mergedList = list1;
            list1 = list1->next;
        }
        else{
            mergedList = list2;
            list2 = list2->next;
        }
        ListNode* curr = mergedList;
        while(list1 || list2){
            if(list1==nullptr){
                curr->next = list2;
                return mergedList;
            }
            else if(list2==nullptr){
                curr->next = list1;
                return mergedList;
            }
            else if(list1->val < list2->val){
                curr->next = list1;
                list1 = list1->next;
                curr = curr->next;
            }
            else{
                curr->next = list2;
                list2 = list2->next;
                curr = curr->next;
            }
        }
        return mergedList;
    }
};