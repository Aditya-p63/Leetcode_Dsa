class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>arr;
        int n = nums.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i = 0 ; i < n ; i++){
            pq.push(nums[i]);
        }
        while(pq.size()>0){
            int alice = pq.top();
            pq.pop();
            int bob = pq.top();
            pq.pop();
            arr.push_back(bob);
            arr.push_back(alice);
        } 
        return arr;
    }
};