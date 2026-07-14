class Solution {
public:
    TreeNode*  helpher(vector<int>& nums , int lo ,int hi ){
        int mid = lo+(hi-lo)/2;
        if(lo>hi) return NULL;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left= helpher( nums ,  lo , mid-1 );
        root->right= helpher( nums ,  mid+1 , hi );
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return helpher(nums,0,n-1);
    }
};