/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr)
            return nullptr;
        Node *curr = head;
        Node *tp;
        
        //Form A -> A' -> B -> B' -> C -> C' -> ....
        while(curr!=nullptr){
            tp = new Node(curr->val);
            tp->next = curr->next;
            tp->random = curr->random;
            curr->next = tp;
            curr = curr->next->next;
        }
        //Form the random links, A' -> random = A -> random -> next or (A->random)'
        curr = head->next;
        while(curr!=nullptr){
            if(curr->random!=nullptr)
                curr->random = curr->random->next;
            curr = curr->next;
            if(curr!=nullptr)
                curr = curr->next;
        }
        
        //split into two lists
        Node *deepCopy = head->next;
        Node *deepCopyCurr = head->next;
        curr = head;
        while(curr!=nullptr){
            curr->next = curr->next->next;
            if(deepCopyCurr->next!=nullptr)
                deepCopyCurr->next = deepCopyCurr->next->next;
            else
                deepCopyCurr->next = nullptr;
            curr = curr->next;
            deepCopyCurr = deepCopyCurr->next;
        }
        return deepCopy;
    }
};