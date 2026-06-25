class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size() , m = arr[0].size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < m; j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int k = 0; k < n; k++){
            int i = 0 , j = n-1;
            while(i<j){
                swap(arr[k][i],arr[k][j]);
                i++;
                j--;
            }
        }
    }
};