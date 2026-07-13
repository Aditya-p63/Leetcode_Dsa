class Solution {
public:
    void display( vector<int>&ans , TreeNode* root){
       stack<TreeNode*>st;
       if(root) st.push(root);
       while(st.size()>0){
        TreeNode* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
       }
       
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
         display(ans,root);
         return ans;
    }
};