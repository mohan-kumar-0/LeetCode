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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> zigzag;
        if(root==nullptr)
            return zigzag;
        queue<pair<TreeNode*,short>> nodes;
        nodes.push({root,0});
        pair<TreeNode*,short> currNode;
        vector<int> emptyVector;
        while(!nodes.empty()){
            currNode = nodes.front();
            nodes.pop();
            if(zigzag.size()==currNode.second)
                zigzag.push_back(emptyVector);
            zigzag[currNode.second].push_back(currNode.first->val);
            if(currNode.first->left!=nullptr)
                nodes.push({currNode.first->left,currNode.second+1});
            if(currNode.first->right!=nullptr)
                nodes.push({currNode.first->right,currNode.second+1});
        }
        if(zigzag.size()>1)
            for(int i=1;i<zigzag.size();i+=2)
                reverse(zigzag[i].begin(),zigzag[i].end());
        return zigzag;
    }
};