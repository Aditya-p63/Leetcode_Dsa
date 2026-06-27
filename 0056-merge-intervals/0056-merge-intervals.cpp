class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        sort(arr.begin() , arr.end());
                vector<vector<int>> ans;

        for(int i = 0; i < n; ){
            int start = arr[i][0] , end = arr[i][1];
            int j = i+1;
            while(j < n && arr[j][0] <= end){
                end = max(end,arr[j][1]);
                j++;
            }
            ans.push_back({start,end});
            i = j;
        }
        return ans;
    }
};