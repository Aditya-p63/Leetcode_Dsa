bool cmp(vector<int>&a,vector<int>&b){
    return a[0]<b[0];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& intervals) {
          sort(intervals.begin(),intervals.end(),cmp);
        int ans = 0;
        int le = intervals[0][1];
        for(int i = 1 ; i < intervals.size() ; i++){
            if(intervals[i][0]<=le) {ans++;
            le = min(le,intervals[i][1]);
            }
            else le = intervals[i][1];
        }
        return intervals.size()-ans; 
    }
};