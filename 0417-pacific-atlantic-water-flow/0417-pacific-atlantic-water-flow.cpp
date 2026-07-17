class Solution {
public:

    vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
    int row ,col;
    vector<vector<int>>h;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        row = heights.size();
        col = heights[0].size();
        h = heights;
        queue<pair<int,int>>pacificbfs;
        queue<pair<int,int>>atlanticbfs;
        for(int i = 0 ; i < row ; i++){
            pacificbfs.push({i,0});
            atlanticbfs.push({i,col-1});
        }
        for(int i = 1 ; i < col ; i++){
            pacificbfs.push({0,i});
        }
        for(int j = 0 ; j < col-1 ; j++){
           atlanticbfs.push({row-1,j}); 
        }
        vector<vector<bool>>pacific = bfs(pacificbfs);
        vector<vector<bool>>atlantic = bfs(atlanticbfs);
        vector<vector<int>>result;
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(pacific[i][j] && atlantic[i][j]) result.push_back({i,j});
            }
        }
        return result;
    }

    vector<vector<bool>>bfs(queue<pair<int,int>>&q){
        vector<vector<bool>>visited(row,vector<bool>(col,false));
        while(not q.empty()){
            auto cell = q.front();
            q.pop();
            int i = cell.first;
            int j = cell.second;
            visited[i][j]=true;
            for(int d = 0 ; d < 4 ; d++){
                int newrow = i+dir[d][0];
                int newcol = j+dir[d][1];
                if(newrow<0 || newcol<0 || newrow>=row || newcol>=col){
                    continue;
                }
                if(visited[newrow][newcol]) continue;
                if(h[newrow][newcol] <  h[i][j]) continue;
                q.push({newrow,newcol});
            }
        }
        return visited;
    }
};