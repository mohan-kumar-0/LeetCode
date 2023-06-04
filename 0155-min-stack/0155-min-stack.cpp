class MinStack {
    int stack[30000];
    int minStack[30000];
    int idx;

    int min(int& a, int& b){
        if(a<b)
            return a;
        return b;
    }

public:
    MinStack() {
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
        idx=-1;
    }
    
    void push(int val) {
        ++idx;
        stack[idx] = val;
        if(idx>0)
            minStack[idx] = min(val,minStack[idx-1]);
        else
            minStack[idx] = val;
    }
    
    void pop() {
        --idx;
    }
    
    int top() {
        return stack[idx];
    }
    
    int getMin() {
        return minStack[idx];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */