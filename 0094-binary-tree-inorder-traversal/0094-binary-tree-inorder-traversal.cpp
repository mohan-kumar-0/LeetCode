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
    vector<int> res;
    bool started;
public:
    Solution(){
        res.clear();
        started = false;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        if(!started){
            started = true;
            res.clear();
            if(root==nullptr)
                return res;
        }
        if(root->left!=nullptr)
            inorderTraversal(root->left);
        res.push_back(root->val);
        if(root->right!=nullptr)
            inorderTraversal(root->right);
        return res;
    }
};