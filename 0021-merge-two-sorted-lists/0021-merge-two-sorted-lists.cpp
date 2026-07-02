class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
            //method 1

        // ListNode* tempa=a;
        // ListNode* tempb=b;
        // ListNode* c = new ListNode(100);
        // ListNode* tempc=c;
        // while(tempa!=NULL && tempb!=NULL){
        //     if(tempa->val <= tempb->val){
        //         ListNode* t= new ListNode(tempa->val);
        //         tempc->next=t;
        //         tempc=t;
        //         tempa=tempa->next;
        //     }
        //     else {
        //         ListNode* t= new ListNode(tempb->val);
        //         tempc->next=t;
        //         tempc=t;
        //         tempb=tempb->next;
        //     }
        // }
        // if(tempa==NULL){
        //     tempc->next=tempb;
        // }
        // else{
        //     tempc->next=tempa;
        // }
        // return c->next;

        //method 2

        
        ListNode* c = new ListNode(100);
        ListNode* temp=c;
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                c->next=a;
                c=c->next;
                a=a->next;
            }
            else {
                c->next=b;
                c=c->next;
                b=b->next;
            }
        }
        if(a==NULL){
            c->next=b;
        }
        else{
            c->next=a;
        }
        return temp->next;

    }
};