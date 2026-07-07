class Solution {
public:
vector<vector<int>> ans;
    void f(vector<int>& arr , int t , int idx , vector<int>& sub){
        if(t==0){
            ans.push_back(sub);
            return ;
        }
        if(idx==arr.size()) return;
        if(arr[idx] <= t){
            sub.push_back(arr[idx]);
            f(arr,t-arr[idx],idx+1,sub);
            sub.pop_back();
        }
        int j = idx+1;
        while(j < arr.size() and arr[j]==arr[j-1]) j++;
            f(arr,t,j,sub);
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<int>a;
        ans.clear();
        f(arr,target,0,a);
        return ans;
    }
};