class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        int i = 0, j = 0, k = 0;
        vector<int> ans(n + m);
        while (i < n && j < m) {
            if (a[i] <= b[j]) {
                ans[k] = a[i];
                i++;
                k++;
            } else if (a[i] > b[j]) {
                ans[k] = b[j];
                k++;
                j++;
            }
        }
        while (i < n) {
            ans[k] = a[i];
            k++;
            i++;
        }
        while (j < m) {
            ans[k] = b[j];
            k++;
            j++;
        }
        n = ans.size();
        double sum = 0;
        if(n%2==1) return ans[n/2];
        else {
            sum = (ans[n/2]+ans[(n/2)-1])/2.0;
        }
        return sum;
    }
};