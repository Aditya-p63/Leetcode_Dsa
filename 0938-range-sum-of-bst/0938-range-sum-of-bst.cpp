class Solution {
public:
 void inorder(TreeNode* root , vector<int>&v){
        if(root==NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        // this is a brutte force solution
        vector<int>v;
        inorder(root,v);
        int sum = 0 ;
        int n = v.size();
        for(int i = 0 ; i <= n ; i++){
            if(v[i]<=high && v[i]>=low){
                sum+=v[i];
            }
        }
        return sum;
    }
};