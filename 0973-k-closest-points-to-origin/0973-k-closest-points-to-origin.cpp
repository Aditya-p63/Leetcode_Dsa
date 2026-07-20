class Solution {
public:
typedef pair<int,vector<int>>pi;
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        int n = arr.size();
        priority_queue<pi>pq;
        for(auto v : arr){
            int x = v[0];
            int y = v[1];
            int sq = x*x + y*y;
            pq.push({sq,v});
            if(pq.size()>k) pq.pop();
        }
        vector<vector<int>>ans;
        while(pq.size()>0){
            vector<int>ele = pq.top().second;
            pq.pop();
            ans.push_back(ele);
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }
};