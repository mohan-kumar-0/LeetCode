class Solution {
public:
#define Node TreeNode
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root == NULL )return root;
        if(root->left==NULL && root->right==NULL && root->val == target)return NULL;
        if(root->left==NULL && root->right == NULL)return root;
        root->left = removeLeafNodes(root->left,target);
        root->right = removeLeafNodes(root->right,target);
        if(root->val == target && root->left==NULL && root->right==NULL)return NULL;
        return root;
    }
};