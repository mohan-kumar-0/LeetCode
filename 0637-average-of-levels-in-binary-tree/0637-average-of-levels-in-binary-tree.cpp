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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        long long int sum[10000] = {0};
        int count[10000] = {0};
        vector<double> ans;
        q.push({root,0});
        pair<TreeNode*,int> curr;
        while(!q.empty()){
            curr = q.front();
            q.pop();
            sum[curr.second]+=curr.first->val;
            ++count[curr.second];
            if(curr.first->left!=nullptr)
                q.push({curr.first->left,curr.second+1});
            if(curr.first->right!=nullptr)
                q.push({curr.first->right,curr.second+1});
        }
        for(int i=0;i<10000 && count[i]; ++i)
            ans.push_back(((double)sum[i])/count[i]);
        return ans;
    }
};