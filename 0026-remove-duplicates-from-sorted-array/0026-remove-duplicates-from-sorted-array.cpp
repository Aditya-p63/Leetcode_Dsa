class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        int k = 1 , j = 0 , i = 0;
        while(j < n){
            if(arr[i]==arr[j]){
                j++;
            }
            else{
                arr[k] = arr[j];
                k++;
                i = j;  
                j++;
            }
        }
        return k;
    }
};