class Solution {
public:
    Node* copyRandomList(Node* head) {
        // step 1
        Node* dummy = new Node(10);
        Node* tc = dummy;
        Node* temp = head;
        while (temp) {
            Node* a = new Node(temp->val);
            tc->next = a;
            tc = tc->next;
            temp = temp->next;
        }
        // step 2
        Node* duplicate = dummy->next;
        Node* a = head;
        Node* b = duplicate;
        dummy = new Node(-1);
        Node* tempc = dummy;
        while (a) {
            tempc->next = a;
            a = a->next;
            tempc = tempc->next;
            tempc->next = b;
            b = b->next;
            tempc = tempc->next;
        }
        dummy = dummy->next;
        // step 3 dummy connection krenge
        Node* t1 = dummy;
        
        while(t1){
            Node* t2 = t1->next;
            if(t1->random) {
                t2->random = t1->random->next;
            }
            t1 = t1->next->next; 
        }
       //step 4 seperation
        Node* d1 = new Node(-1);
        Node* d2 = new Node(-1);
        t1 = d1;
        Node* t2 = d2;
        Node* t = dummy;
        while(t){
            t1->next = t;
            t = t->next;
            t1 = t1->next;
            t2->next = t;
            t = t->next;
            t2 = t2->next;
        }
        t1->next = NULL;
        t2->next = NULL;
        d1 = d1->next;
        d2 = d2->next;
        return d2;
    }
};
