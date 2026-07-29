class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>mp;
        for(int i = 0 ; i < n ; i++){
            mp[arr[i]]++;
        }
        int count = -1;
        for(auto x : mp ){
            if(x.first==x.second) count = max(count,x.first);
        }
        return count;
    }
};