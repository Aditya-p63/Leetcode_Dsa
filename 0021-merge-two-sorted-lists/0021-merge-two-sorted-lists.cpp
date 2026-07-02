class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>arr;
        while(list1!=NULL){
            arr.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2!=NULL){
            arr.push_back(list2->val);
            list2 = list2->next;
        }
        sort(arr.begin() , arr.end());
        ListNode* n = new ListNode(-1);
        ListNode* temp = n;
        for(int i = 0; i < arr.size(); i++){
            ListNode* t = new ListNode(arr[i]);
            temp->next = t;
            temp = temp->next;
        }
        return n->next;
    }
};