class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        priority_queue<int>large;
        priority_queue<int,vector<int>,greater<int>>small;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            large.push(nums[i]);
        }
        for(int i = 0 ; i < n ; i++){
            small.push(nums[i]);
        }
        int ls= 0;
        int ss= 0;
        int j = k;
        while(k--){
            ls+=large.top();
            large.pop();
        }
        
        while(j--){
            ss+=small.top();
            small.pop();
        }
        return abs(ls-ss);
        

    }
};