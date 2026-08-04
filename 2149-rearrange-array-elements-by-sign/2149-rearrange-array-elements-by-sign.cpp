class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>posi,negi;
        for(int i=0;i<n;i++){
            if(nums[i]<0) negi.push_back(nums[i]);
            if(nums[i]>0) posi.push_back(nums[i]);
        }
        nums.clear();
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(i%2==0) {
                nums.push_back(posi[x]);
            x++;
            }
            else{
                nums.push_back(negi[y]);
                y++;
            }
        }
            
        return nums;
    }
};