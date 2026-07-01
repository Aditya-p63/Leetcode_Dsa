class Solution {
public:
    ListNode* getnode(ListNode* head , int idx){
    ListNode* temp = head;
        for(int i = 1;i<=idx;i++){
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseList(ListNode* head) {
    // method 1
    // int n = 0;
    // ListNode* temp = head;
    // while(temp){
    //     temp=temp->next;
    //     n++;
    // }
    // int i =0; 
    // int j = n-1;
    // while(i<j){
    //     ListNode* left = getnode(head,i);
    //     ListNode* right = getnode(head,j);
    //     int t =left->val;
    //     left->val=right->val;
    //     right->val=t;
    //     i++;j--;
    // }
    //     return head;

    //method  2  
    // ListNode* prev=NULL;
    // ListNode* curr=head;
    // ListNode* NEXT=head;
    // while(curr!=NULL){
    //     NEXT=curr->next;
    //     curr->next=prev;
    //     prev=curr;
    //     curr=NEXT;
    // }
    // return prev;
    
        //method 3
        if(head==NULL || head->next==NULL) return head;
        ListNode* newhead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }
};