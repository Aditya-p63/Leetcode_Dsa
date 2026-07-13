class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        TreeNode* curr = root;
        while(curr!=NULL){
            if(curr->left!=NULL){
                TreeNode* pred = curr->left;
                while(pred->right && pred->right!=curr){
                    pred = pred->right;
                }
                if(pred->right==NULL){
                    pred->right = curr;
                    curr=curr->left;
                }
                if(pred->right==curr){
                    pred->right = NULL;
                    v.push_back(curr->val);
                    curr=curr->right;
                }

            }
            else {
                v.push_back(curr->val);
                curr = curr->right; 
            }
        } 
        return v;
    }
};