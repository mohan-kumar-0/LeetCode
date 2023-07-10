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
    int ans;
    bool started;
public:
    Solution(){
        started = false;
    }
    int maxDepth(TreeNode* root, int currDepth = 1) {
        if(!started){
            started = true;
            ans = 1;
            if(root==nullptr)
                return 0;
        }
        ans = max(ans,currDepth);
        if(root->left!=nullptr)
            maxDepth(root->left,currDepth+1);
        if(root->right!=nullptr)
            maxDepth(root->right,currDepth+1);
        return ans;
    }
};