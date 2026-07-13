class Solution {
public:
int level(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}

void nlevel(TreeNode* root , int curr , int level , vector<int>&ans){
    if(root==NULL) return;
    if(curr==level) {ans[curr] = root->val;
    return;
    }
    nlevel(root->left , curr+1 , level , ans);
    nlevel(root->right , curr+1 , level , ans);
}
void levelorde(TreeNode* root , vector<int>&ans){
    int n = ans.size();
    for(int i = 0 ; i < n ; i++){
        nlevel(root,0,i,ans);
    }
}
    vector<int> rightSideView(TreeNode* root) {
        int n = level(root);
        vector<int>ans(n);
        levelorde(root,ans);
        return ans;
    }
};