class MinStack {
public:
stack<int>st;
stack<int>helpher;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(helpher.size() == 0 || val<helpher.top()){
            helpher.push(val);
        }
        else {
            helpher.push(helpher.top());
        }
    }
    
    void pop() {
        st.pop();
        helpher.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return helpher.top();
    }
};
