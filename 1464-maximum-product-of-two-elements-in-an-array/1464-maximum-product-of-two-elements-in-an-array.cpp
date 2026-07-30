class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            pq.push(nums[i]);
        }
        int sum = 0;
        int x = 1;
        while(x>0){
            int n = pq.top();
            pq.pop();
            int m = pq.top();
            int k = (n-1)*(m-1);
            sum = k;
            x--;
        }
        return sum;
    }
};