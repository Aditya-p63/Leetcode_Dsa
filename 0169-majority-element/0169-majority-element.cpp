class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int curr = 0 , ele = -1;
        for(int i = 0; i < n; i++){
            if(curr==0){
                ele = nums[i];
            }
            if(nums[i]==ele){
               curr++;
            }
            else curr--;
            
        }
        return ele;

    }
};