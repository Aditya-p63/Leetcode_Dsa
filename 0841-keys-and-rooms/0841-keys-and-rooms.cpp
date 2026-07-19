class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
            unordered_set<int>visited;
            queue<int>q;
            q.push(0);
            visited.insert(0);
            while(!q.empty()){
                int curr = q.front();
                q.pop();
               
                for(int x : rooms[curr]){
                    if(visited.count(x)==0){
                        q.push(x);
                        visited.insert(x);
                    }
                }
            }
            return visited.size()==rooms.size();
    }
};