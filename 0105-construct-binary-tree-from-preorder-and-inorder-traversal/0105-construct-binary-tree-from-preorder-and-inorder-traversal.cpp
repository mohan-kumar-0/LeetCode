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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0)
            return nullptr;
        int root = preorder[0];
        vector<int> leftInorder, rightInorder, leftPreorder, rightPreorder;
        int i=0;
        while(inorder[i]!=root){
            leftInorder.push_back(inorder[i]);
            ++i;
        }
        ++i;
        while(i<inorder.size()){
            rightInorder.push_back(inorder[i]);
            ++i;
        }
        i=0;
        while(i<leftInorder.size()){
            leftPreorder.push_back(preorder[i+1]);
            ++i;
        }
        ++i;
        while(i<preorder.size()){
            rightPreorder.push_back(preorder[i]);
            ++i;
        }
        TreeNode* node = new TreeNode(root,buildTree(leftPreorder,leftInorder),buildTree(rightPreorder,rightInorder));
        return node;
    }
};