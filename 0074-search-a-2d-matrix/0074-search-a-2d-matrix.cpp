class Solution {
public:

    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int n = arr.size();
        int m = arr[0].size();
        int lo = 0 , hi = n*m-1;
        while(lo <= hi){
            int mid = lo+((hi-lo)/2);
            int row = mid/m;
            int col = mid%m;
            if (arr[row][col] == target)
                return true;
            else if(arr[row][col] < target) lo = mid+1;
            else hi = mid-1;

        }
        return false;
    }
};