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
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
        
    bool isEvenOddTree(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        q.push({root,1});
        TreeNode* currNode;
        int currVal;
        int mn[100000] = {0};
        while(!q.empty()){
            currNode = q.front().first;
            currVal = q.front().second;
            // cout<<currVal<<" "<<currNode->val<<" "<<mn[currVal]<<"\n";
            q.pop();
            if(mn[currVal]!=0 && ((mn[currVal]<=currNode->val && currVal%2==0) || (mn[currVal]>=currNode->val && currVal%2==1)) )
                return false;
            mn[currVal] = currNode->val;
            if(((currNode->val)%2)!=(currVal%2))
                return false;
            if(currNode->left)
                q.push({currNode->left,currVal+1});
            if(currNode->right)
                q.push({currNode->right,currVal+1});
        }
        return true;
    }
};