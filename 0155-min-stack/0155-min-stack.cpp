class MinStack {
public:
vector<int>a;

    MinStack() {
        
    }
    
    void push(int val) {
       a.push_back(val);
    }
    
    void pop() {
        a.pop_back();
    }
    
    int top() {
        return a[a.size()-1];
    }
    
    int getMin() {
        int mx = INT_MAX;
        for(int i = 0 ; i < a.size() ; i++){
            if(a[i]<mx) mx = a[i];
        }
        return mx;
    }
};
