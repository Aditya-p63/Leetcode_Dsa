class Solution {
public:
    bool f(vector<int>& arr, int x) {
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x)
                return true;
            else if (arr[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }
    bool searchMatrix(vector<vector<int>>& arr, int x) {

        int n = arr.size();
        int m = arr[0].size();

        for (int i = 0; i < n; i++) {
            if (arr[i][0] <= x && x <= arr[i][m - 1]) {
                if( f(arr[i], x)==true) return true;
            }
        }

        return false;
    }
};