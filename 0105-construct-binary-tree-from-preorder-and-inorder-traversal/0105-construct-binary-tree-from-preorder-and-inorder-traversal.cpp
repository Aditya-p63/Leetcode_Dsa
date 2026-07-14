class Solution {
public:
    TreeNode* help(vector<int>& pre, int prelo, int prehi, vector<int>& in,
                   int inlo, int inhi) {
                    if(prelo>prehi )return NULL;
                  
            TreeNode* root =new TreeNode( pre[prelo]);
               if(prelo==prehi) return root;
            int i = inlo;
            while(i<=inhi){
            if(in[i]==pre[prelo]) break;
            i++;
        }
        int lc = i-inlo;
        int rc = inhi-i;
        root->left=help(pre , prelo+1 , prelo+lc , in , inlo , i-1);
        root->right=help(pre , prelo+1+lc , prehi , in , i+1 , inhi);
        return root;

    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n  = pre.size();
        return help(pre,0,n-1,in,0,n-1);

    }
};