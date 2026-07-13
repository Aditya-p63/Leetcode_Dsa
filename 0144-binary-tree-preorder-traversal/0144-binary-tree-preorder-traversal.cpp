class Solution {
public:
    void display( vector<int>&ans , TreeNode* root){
        if(root==NULL) return ;
        ans.push_back(root->val);
        display(ans , root->left);
        display(ans , root->right);
       
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
         display(ans,root);
         return ans;
    }
};