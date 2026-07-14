class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int cc = 0;
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(grid[i][j]=='0') {
                    //it is a water body 
                    continue;
                }
                cc++;
                grid[i][j]='0';
                queue<pair<int,int>>q;
                q.push({i,j});
                while(not q.empty()){
                    auto curr = q.front();
                    q.pop();
                    //go to all neighbours of the current node
                    int curr_row = curr.first;
                    int curr_col = curr.second;
                    if(curr_row-1>=0 && grid[curr_row-1][curr_col]=='1'){
                        q.push({curr_row-1,curr_col});
                        grid[curr_row-1][curr_col]='0';
                    }
                    if(curr_row+1<row && grid[curr_row+1][curr_col]=='1'){
                        q.push({curr_row+1,curr_col});
                        grid[curr_row+1][curr_col]='0';
                    }
                    if(curr_col-1>=0 && grid[curr_row][curr_col-1]=='1'){
                        q.push({curr_row,curr_col-1});
                        grid[curr_row][curr_col-1]='0';
                    }
                    if(curr_col+1<col && grid[curr_row][curr_col+1]=='1'){
                        q.push({curr_row,curr_col+1});
                        grid[curr_row][curr_col+1]='0';
                    }
                }
            }
        }
        return cc;
    }
};