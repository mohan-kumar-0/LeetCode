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
    int findBottomLeftValue(TreeNode* root) {
        queue<pair<TreeNode*,int>> currLevel;
        currLevel.push({root,0});
        int leftmost = -1;
        int maxDepth = -1;
        TreeNode* curr;
        int depth;
        while(!currLevel.empty()){
            curr = currLevel.front().first;
            depth = currLevel.front().second;
            currLevel.pop();
            if(depth>maxDepth){
                maxDepth = depth;
                leftmost = curr->val;
            }
            if(curr->left)
                currLevel.push({curr->left,depth+1});
            if(curr->right)
                currLevel.push({curr->right,depth+1});
        }
        return leftmost;
    }
};