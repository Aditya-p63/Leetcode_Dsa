class Solution {
public:
    
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        bool check = false;//
        while(q.size()>0){
            TreeNode* x = q.front();
            q.pop();
            if(x==NULL) check = true;
            // if(x->left==NULL and x->right!=NULL) return false;
            else{
                if(check) return false;
            q.push(x->left);
            q.push(x->right);}
        }
        return true;
    }
};