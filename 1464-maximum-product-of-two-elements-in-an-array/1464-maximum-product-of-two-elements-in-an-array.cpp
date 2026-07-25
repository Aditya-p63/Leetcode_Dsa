class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            pq.push(nums[i]);
        }
        int sum = 0;
            int c = pq.top();
            pq.pop();
            int m = pq.top();
            int k = (c-1)*(m-1);
            sum = k;
        return sum;
    }
};