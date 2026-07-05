class Solution {
public:
    int getSize(ListNode* head) {
        int cnt = 0;
        while (head != NULL) {
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        // if(head == NULL || head->next == NULL || k==0) return head;
        int size = getSize(head);
        if(k==0 || size==0) return head;
        k = k%size;
        size = size-k-1;
        ListNode* temp = head;
        if(head == NULL || head->next == NULL || k==0) return head;
        while(size > 0){
            temp = temp->next;
            size--;
        } 
        ListNode* t = temp->next;
        temp->next = nullptr;
        temp = t;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = head;
        return t;
    }
};