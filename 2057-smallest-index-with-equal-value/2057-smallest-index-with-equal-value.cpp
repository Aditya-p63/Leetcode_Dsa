class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n = nums.size();
        // int x=0;
        // int y=-1;
        // bool flag=false;
        // for(int i=0;i<n;i++){
        //     if(x%10==nums[i]){
        //         y=i;
        //         flag=true;
        //         break;
        //     }
        //     x++;
        // }
        // if(flag==true) return y;
        // return -1;
        for (int i = 0; i < n; i++) {
            if (i % 10 == nums[i]) {
                return i;
            }
        }
        return -1;
    }
};