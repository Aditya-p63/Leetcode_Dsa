class MyQueue {
public:
    stack<int> st;
    stack<int> help;
    MyQueue() {}

    void push(int x) {
        if (st.size() == 0) {
            st.push(x);
            return;
        } else {
            while (st.size() > 0) {
                help.push(st.top());
                st.pop();
            }
            st.push(x);
            while (help.size() > 0) {
                st.push(help.top());
                help.pop();
            }
        }
    }

    int pop() {
        int x = st.top();
        st.pop();
        return x;
    }

    int peek() { return st.top(); }

    bool empty() {
        if (st.size() == 0)
            return true;
        return false;
    }
};
