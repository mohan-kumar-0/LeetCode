/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr)
            return root;
        queue<pair<Node*,short>> q;
        q.push({root,0});
        Node* curr;
        short lvl;
        while(!q.empty()){
            curr = q.front().first;
            lvl = q.front().second;
            q.pop();
            if(curr->left!=nullptr)
                q.push({curr->left,lvl+1});
            if(curr->right!=nullptr)
                q.push({curr->right,lvl+1});
            if(q.empty() || q.front().second!=lvl)
                curr->next = nullptr;
            else
                curr->next = q.front().first;
        }
        return root;
    }
};