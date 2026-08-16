class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int x =0 , y = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(nums1[i]==nums2[j]){
                    x++;
                    break;
                }
            }
        }
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(nums2[i]==nums1[j]){
                    y++;
                    break;
                }
            }
        }
        return {x,y};
    }
};