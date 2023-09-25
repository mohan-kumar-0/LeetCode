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
    bool areSame(TreeNode* root1, TreeNode* root2){
        if((root1==nullptr && root2!=nullptr)||(root1!=nullptr && root2==nullptr))
            return false;
        if(root1==nullptr && root2==nullptr)
            return true;
        return root1->val==root2->val && areSame(root1->left,root2->right) && areSame(root1->right,root2->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)
            return true;
        return areSame(root->left, root->right);
    }
};