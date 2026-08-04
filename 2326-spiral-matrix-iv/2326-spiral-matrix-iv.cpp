class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int minr=0,maxr=m-1;
        int minc=0,maxc=n-1;
        ListNode* temp=head;
        vector<vector<int>> a(m, vector<int>(n,-1));
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc ;j++){
                if(temp==NULL) return a;
                a[minr][j]=temp->val;
               temp=temp->next;
            }
            minr++;
            for(int i=minr;i<=maxr  ;i++){
                if(temp==NULL) return a;
                    a[i][maxc]=temp->val;
                    temp=temp->next;
            }
            maxc--;
            for(int j=maxc;j>=minc  ;j--){
                if(temp==NULL) return a;
                a[maxr][j]=temp->val;
                temp=temp->next;
            }
            maxr--;
            for(int i=maxr;i>=minr  ;i--){
                if(temp==NULL) return a;
                a[i][minc]=temp->val;
                temp=temp->next;
            }
            minc++;
        }
            return a;
    }
};