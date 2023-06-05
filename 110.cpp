class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        if (abs(depth(root->left) - depth(root->right)) > 1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }

    
    int depth(TreeNode* root){
        if(!root){
            return 0;
        }

        int leftHeight = depth(root->left);
        int rightHeight = depth(root->right);
        int heightMiddle = 1 + max(leftHeight, rightHeight);
        return heightMiddle;

    }
};