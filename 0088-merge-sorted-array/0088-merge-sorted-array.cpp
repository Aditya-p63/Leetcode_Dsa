class Solution {
public:
    void merge(vector<int>& arr, int m, vector<int>& brr, int n) {
        int i = m-1 , j = n-1 , k = m+n-1;
        while(i >= 0 && j >= 0){
            if(arr[i]>brr[j]){
                arr[k]=arr[i];
                i--;
            }
            else{
                arr[k] = brr[j];
                j--;
            }
            k--;
        }
        while(j>=0){
            arr[k] = brr[j];
            k--;j--;
        }
    }
};