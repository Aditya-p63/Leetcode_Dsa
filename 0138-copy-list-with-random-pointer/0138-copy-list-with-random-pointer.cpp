class Solution {
public:
    Node* copyRandomList(Node* head) {
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
        Node* b = dummy->next;
        Node* a = head;
        unordered_map<Node* , Node* >m;
        Node* tempa = a;
        Node* tempb = b;
        while(tempa){
            m[tempa]=tempb;
            tempa = tempa->next;
            tempb = tempb->next;
        }
        for(auto x : m){
            Node* o = x.first;
            Node* d = x.second;
            if(o->random!=NULL){
                Node* oran = o->random;
                Node* dran = m[o->random];
                d->random =  dran; 
            }
        }
        return b;
    }
};