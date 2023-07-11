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
    bool isBalancedTree;
public:
    int checkHeights(TreeNode* root){
        if(root==nullptr)
            return 0;
        int leftHeight = checkHeights(root->left);
        int rightHeight = checkHeights(root->right);
        if(abs(leftHeight-rightHeight)>1)
            isBalancedTree = false;
        return max(leftHeight,rightHeight)+1;
    }
    bool isBalanced(TreeNode* root) {
        isBalancedTree = true;
        if(root==nullptr)
            return true;
        checkHeights(root);
        return isBalancedTree;
    }
};