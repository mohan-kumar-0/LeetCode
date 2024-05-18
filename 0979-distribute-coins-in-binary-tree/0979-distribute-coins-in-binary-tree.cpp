class Solution {
    int DFS(TreeNode* root,int &ans){
        if(root==nullptr) 
            return 0;
        int coins = DFS(root->left,ans) + DFS(root->right,ans)+root->val - 1;
        ans += abs(coins);
        return coins;
    }
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int distributeCoins(TreeNode* root) {
        int ans = 0;
        DFS(root,ans);
        return ans;
    }
};