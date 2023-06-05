class Solution {
    public boolean isBalanced(TreeNode root){
        return recur(root) != -1;
    }

    public int recur(TreeNode root){
        if (root == null) return 0;
        int leftTree = recur(root.left);
        if (leftTree == -1) return -1;
        int rightTree = recur(root.right);
        if (rightTree == -1) return -1;
        return Math.abs(leftTree - rightTree) < 2? Math.max(leftTree, rightTree)+1:-1;
    } 
};