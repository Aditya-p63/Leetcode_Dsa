class Solution {
public:
    int rev(int num) {
        int reversedNum = 0;
        while (num != 0) {
            int digit = num % 10; 
            reversedNum = reversedNum * 10 + digit; 
            num /= 10; 
        }
        return reversedNum;
    }

    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;
        unordered_map<int,int>m;
        // Step 1: Transform nums[i]
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] - rev(nums[i]);
        }

        for(int i = 0 ; i < n ; i++ ){
            if(m.find(nums[i])!=m.end()){
                count = (count % 1000000007);
                count+=m[nums[i]];  
            }
            m[nums[i]]++;
            
        }

        return (count % 1000000007); 
    }
};
