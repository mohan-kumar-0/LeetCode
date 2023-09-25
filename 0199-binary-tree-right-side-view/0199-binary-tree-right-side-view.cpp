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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightView;
        if(root==nullptr)
            return rightView;
        queue<pair<TreeNode*,int>> nodes;
        TreeNode* curr;
        int currLevel;
        nodes.push({root,0});
        while(!nodes.empty()){
            curr = nodes.front().first;
            currLevel = nodes.front().second;
            nodes.pop();
            if(rightView.size()==currLevel)
                rightView.push_back(curr->val);
            else
                rightView[currLevel] = curr->val;
            if(curr->left!=nullptr)
                nodes.push({curr->left,currLevel+1});
            if(curr->right!=nullptr)
                nodes.push({curr->right,currLevel+1});
        }
        return rightView;
    }
};