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
    bool uniVal(int data,TreeNode *root){
        if(root==nullptr) return true;
        if(root->val!=data) return false;
        bool left=uniVal(data,root->left);
        bool right=uniVal(data,root->right);
        return left &right;
    }
    bool isUnivalTree(TreeNode* root) {
        int data=root->val;
        return uniVal(data,root);
    }
};