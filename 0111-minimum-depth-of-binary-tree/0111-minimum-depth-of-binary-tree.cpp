/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        if(root==nullptr)
            return 0;
        q.push({root,1});
        pair<TreeNode*,int> curr;
        while(!q.empty()){
            curr = q.front();
            q.pop();
            if(curr.first!=nullptr && curr.first->left==nullptr && curr.first->right==nullptr)
                return curr.second;
            if(curr.first!=nullptr){
                q.push({curr.first->left,curr.second+1});
                q.push({curr.first->right,curr.second+1});
            }
        }
        return -1;
    }
};