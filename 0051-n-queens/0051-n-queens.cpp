class Solution {
public:
    vector<vector<char>>grid;
    vector<vector<string>>ans;
    bool canplaceq(int r , int col , int n){
        for(int i = r-1; i >= 0; i--){
            if(grid[i][col]=='Q'){
                return false;
            }
        }
        for(int i = r-1 , j = col - 1; i >= 0 and j >= 0 ; i--,j--){
            if(grid[i][j]=='Q') return false;
        }

        for(int i = r-1 , j = col + 1; i >= 0 and j < n; i--,j++){
            if(grid[i][j]=='Q') return false;
        }
        return true;
    }
    void f(int r , int n){
        if(r==n){
            vector<string>temp;
            for(int i = 0; i < n; i++){
                string s = "";
                for(int j = 0; j < n; j++){
                    s+=grid[i][j];
                }
                temp.push_back(s);
            }
            ans.push_back(temp);
            return;
        }
        for(int col = 0; col < n; col++){
            if(canplaceq(r,col,n)){
                grid[r][col]='Q';
                f(r+1,n);
                grid[r][col]='.';
            }

        }
    }
    vector<vector<string>> solveNQueens(int n) {
        grid.clear();
        ans.clear();
        grid.resize(n,vector<char>(n,'.'));
        f(0,n);
        return ans;
    }
};