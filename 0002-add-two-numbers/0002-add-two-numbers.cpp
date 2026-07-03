class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* n = new ListNode(-1);
        ListNode* tempn = n;
        int a = 0;
        while(l1 != NULL && l2 != NULL){
            a = a + l1->val;
            int b = l2->val;
            int c = a+b;
            int d = c%10;
            c = c/10;
            int e = c%10;
            ListNode* temp = new ListNode(d);
            tempn->next = temp;
            tempn = tempn->next;
            if(e!=0) a = e;
            else a = 0;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL){
            a = a +  l1->val;
            int b = a%10;
            a = a/10;
            int c = a%10;
            ListNode* temp = new ListNode(b);
            tempn->next = temp;
            tempn = tempn->next;
            if(c!=0) a = c;
            else a = 0;
            l1 = l1->next;
        }
        while(l2!=NULL){
            a = a + l2->val;
            int b = a%10;
            a = a/10;
            int c = a%10;
            ListNode* temp = new ListNode(b);
            tempn->next = temp;
            tempn = tempn->next;
            if(c!=0) a = c;
            else a = 0;
            l2 = l2->next;
        }
        if(a!=NULL) {
            ListNode* n = new ListNode(a);
            tempn->next = n;
        }
        return n->next;
    }
};