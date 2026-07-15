class Solution {
public:
    int dfs(TreeNode* root , int val){
        if(root==NULL) return 0;
        val = val*10 + root->val;
        if(root->left==NULL && root->right==NULL) return val;
        return dfs(root->left,val) + dfs(root->right,val);
    }
   int sumNumbers(TreeNode* root) {
        long long ans = dfs(root, 0LL);
        return static_cast<int>(ans); 
    }
};