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
    int biggest = 0;
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    }
    int dfs(TreeNode *n) {
        if(!n) {
            return 0;
        }
        int l = dfs(n->left) + 1;
        int r = dfs(n->right) + 1;
        if(r + l > biggest) {
            biggest = r + l;
        }
        return (r > l) ? r : l;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return biggest - 2;
    }
};