class Solution {
public:
void merge(vector<int>&a,vector<int>& b,vector<int>& res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k++]=a[i++];
        }
        else {
            res[k++]=b[j++];
        }
        if(i==a.size()){
            while(j<b.size()){
                res[k++]=b[j++];
            }
        }
        if(j==b.size()){
            while(i<a.size()){
                res[k++]=a[i++];
            }
        }
    }
}
void mergesort(vector<int>& nums){
    int n=nums.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++){
         a[i]=nums[i];
    }
     for(int i=0;i<n2;i++){
         b[i]=nums[i+n1];
    }
    mergesort(a);
    mergesort(b);
    merge(a,b,nums);
    a.clear();
    b.clear();
}
    vector<int> sortArray(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums;
        //merge sort
        mergesort(nums);
        return nums;
    }
};