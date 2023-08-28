class MyStack {
    queue<int> a,b;
public:
    MyStack() {
        while(!a.empty()){
            a.pop(); b.pop();
        }
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        int x;
        while(!a.empty()){
            x = a.front();
            a.pop();
            if(!a.empty())
                b.push(x);
        }
        while(!b.empty()){
            a.push(b.front());
            b.pop();
        }
        return x;
    }
    
    int top() {
        return a.back();
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */