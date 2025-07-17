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
    void binaryPaths(vector<string> &collection, string path,TreeNode *temp,TreeNode*root){
        if(temp==nullptr){
            //temp=root;
            return;
        }
        path+=to_string(temp->val);
        if(temp->left!=nullptr || temp->right!=nullptr){
            path.push_back('-');
            path.push_back('>');
        }
             binaryPaths(collection,path,temp->left,root);
             binaryPaths(collection,path,temp->right,root);
        
        if(temp->left==nullptr && temp->right==nullptr){
            collection.push_back(path);
            if(path.length()>=3 ){
                path.pop_back();        
                path.pop_back();  
                path.pop_back();   
                path.pop_back();  
            }
                 
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string path="";
        vector<string> collection;
        binaryPaths(collection,path,root,root);
        return collection;
    }
};