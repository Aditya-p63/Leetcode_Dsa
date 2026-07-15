class Solution {
public:
    long long maxt(TreeNode* root){
        if(root==NULL) return LLONG_MIN;
        return max((long long)root->val,max(maxt(root->left),maxt(root->right)));
    }
    long long mint(TreeNode* root){
        if(root==NULL) return LLONG_MAX;
        return min((long long)root->val , min(mint(root->left),mint(root->right)));
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        else  if((long long)root->val<=maxt(root->left)) return false; 
        else if((long long)root->val>=mint(root->right)) return false;
        return isValidBST(root->left) &&
         isValidBST(root->right);
    }
};