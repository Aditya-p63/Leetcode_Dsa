class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int>mp;
        for(int i = 0  ; i < n ; i++){
            arr[i] = (arr[i]%k)+k;
            arr[i] = arr[i]%k;
            mp[arr[i]]++;
        }
        if(mp.find(0)!=mp.end()){
            if(mp[0]%2!=0) return false;
                }

        if(mp.find(0)!=mp.end())  mp.erase(0);
        for(auto x : mp){
            int ele = x.first;
            int rem = k-ele;
            if(mp.find(rem)==mp.end()) return false;
            if(mp[ele]!=mp[rem]) return false;
        }
        return true;
    }
};