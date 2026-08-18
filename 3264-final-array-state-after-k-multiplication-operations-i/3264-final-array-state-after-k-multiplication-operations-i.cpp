class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        using P = pair<int, int>; 
        priority_queue<P, vector <P>, greater<P>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});
        }

        while (k--) {
            auto [val, idx] = pq.top();
            pq.pop();
            val *= multiplier;
            pq.push({val, idx});
        }
        vector<int>ans(nums.size());
        while(pq.size()>0){
            auto [val,idx]  = pq.top();
            pq.pop();
            ans[idx]=val;
        }
        return ans;
    }
};