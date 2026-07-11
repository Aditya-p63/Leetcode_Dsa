class MyQueue {
public:
    stack<int> st;
    stack<int> help;
    MyQueue() {}

    void push(int x) { st.push(x); }

    int pop() {
        while (st.size() > 0) {
            int x = st.top();
            st.pop();
            help.push(x);
        }
        int x = help.top();
        help.pop();
        while (help.size() > 0) {
            int y = help.top();
            help.pop();
            st.push(y);
        }
        return x;
    }

    int peek() {
        while (st.size() > 0) {
            int x = st.top();
            st.pop();
            help.push(x);
        }
        int x = help.top();
        while (help.size() > 0) {
            int y = help.top();
            help.pop();
            st.push(y);
        }
        return x;
    }

    bool empty() {
        if (st.size() == 0)
            return true;
        return false;
    }
};
