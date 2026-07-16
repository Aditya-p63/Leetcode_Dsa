class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        //method 1
        // int lo=1;
        // int hi=n-1;
        // int y=-1;
        // while(lo<=hi){
        //     int mid=lo+(hi-lo)/2;
        //     int count=0;
        //     for(int i=0;i<n;i++){
        //         if(nums[i]<=mid){
        //             count++;
        //         }
        //     }
        //     if(count>mid){
        //         y=mid;
        //         hi=mid-1;
        //     }
        //     else {
        //         lo=mid+1;
        //     }
        // }
        // return y;
        //method 2
        int i=0;
        while(i<n){
            int el=nums[i];
            if(nums[el]==nums[i]) return nums[i];
            else swap(nums[i],nums[el]);
        }
        return 69;
             
    }
};
