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
    int goodNodes(TreeNode* root, int val = -99999) {
        int ans = 0;
        if(root->val >= val)
            ans++;
        if(root->left!=nullptr)
            ans = ans + goodNodes(root->left,max(val,root->val));
        if(root->right!=nullptr)
            ans = ans + goodNodes(root->right,max(val,root->val));
        return ans;
    }
};