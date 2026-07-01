class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // int len=0;
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     len++;
        //     temp=temp->next;
        // }
        // int mid=len/2;
        // //ListNode* m=head;
        // temp=head;
        // for(int i=1;i<=mid;i++){
        //     //m=m->next;
        //     temp=temp->next;
        // }
        // return temp;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};