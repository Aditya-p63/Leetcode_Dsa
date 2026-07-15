class Solution {
public:
    void inorder(vector<int>& ans, TreeNode* root) {
        if (root == NULL)
            return;
        inorder(ans, root->left);
        ans.push_back(root->val);
        inorder(ans, root->right);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>v;
        inorder(v,root);
        for(int i = 1 ;i< v.size();i++){
            if(v[i]<=v[i-1]) return false;
        }
        return true;
    }
};