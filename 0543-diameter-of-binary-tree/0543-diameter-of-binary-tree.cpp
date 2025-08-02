class Solution {
public:
    int maxHeight(TreeNode *root){
        if(root == nullptr) return 0;
        return 1 + max(maxHeight(root->left), maxHeight(root->right));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;

        // Get left and right subtree heights
        int left = maxHeight(root->left);
        int right = maxHeight(root->right);

        // Diameter through current node
        int currentDiameter = left + right;

        // Get diameter in left and right subtrees
        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);

        // Return the max of all three
        return max(currentDiameter, max(leftDiameter, rightDiameter));
    }
};
