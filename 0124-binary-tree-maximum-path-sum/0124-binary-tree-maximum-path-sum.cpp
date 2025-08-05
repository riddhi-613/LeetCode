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
    int maxPath(TreeNode * root, int & maximum){
        if(root==nullptr) return 0;
        int leftSum=max(0,maxPath(root->left,maximum));
        int rightSum=max(0,maxPath(root->right,maximum));
        maximum=max(maximum,leftSum+rightSum+root->val);
        return root->val+max(leftSum,rightSum);
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxPath(root,maxi);
        return maxi;
    } 
};