class Node {
public:
    Node* left;
    Node* right;
    Node(){
        this->left=this->right=nullptr;
    }
};

class Solution {
public:
int f(Node* head, int val) {
        Node* curr = head;
        int curr_xor = 0;
        for (int i = 31; i >= 0; i--) {
            int bit = (val >> i) & 1;
            if (bit == 0) {
                if (curr->right != nullptr) {
                    curr = curr->right;
                    curr_xor += (1 << i);
                } else {
                    curr = curr->left;
                }
            } else {
                if (curr->left != nullptr) {
                    curr = curr->left;
                    curr_xor += (1 << i);
                } else {
                    curr = curr->right;
                    ;
                }
            }
        }
            return curr_xor;
}
        void insert(Node * head, int val) {
            Node* curr = head;
            for (int i = 31; i >= 0; i--) {
                int bit = (val >> i) & 1;
                if (bit == 0) {
                    if(curr->left==nullptr){
                        curr->left = new Node();
                    }
                    curr = curr->left;
                }else{
                   if(curr->right==nullptr){
                        curr->right = new Node();
                    }
                    curr = curr->right;
                }
            }
        }
        int findMaximumXOR(vector<int> & nums) {
            Node* head = new Node();
            insert(head,nums[0]);
            int ans = INT_MIN;
            for(int i = 0 ; i< nums.size(); i++){
                ans = max(ans,f(head,nums[i]));
                insert(head,nums[i]);
            }
            return ans;
        }
    };