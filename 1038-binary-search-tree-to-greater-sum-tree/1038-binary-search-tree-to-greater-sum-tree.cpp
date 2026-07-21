class Solution {
public:
   void inorder(int& sum, TreeNode* root) {
        if (root == NULL)
            return;
        inorder(sum, root->right);
        root->val+=sum;
        sum=root->val;
        inorder(sum, root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0 ;
        inorder(sum,root);
        return root;
    }
};