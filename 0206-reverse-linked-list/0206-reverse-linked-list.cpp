class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    stack<ListNode*>st;
    ListNode* temp = head;
    while(temp){
        st.push(temp);
        temp = temp->next;
    }
    if (st.empty()) return NULL;
    ListNode* x = st.top();
    st.pop();
    temp = x;
    while(st.size()>0){

        temp->next = st.top();
        st.pop();
        temp = temp->next;
    }
    temp->next = NULL; 
    return x;
    }
};