// https://leetcode.com/problems/min-stack

class MinStack {
    stack<int> st;
    vector<int> vec;
    public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        vec.push_back(val);
    }
    
    void pop() {
        int x = st.top();
        st.pop();
        int index = find(vec.begin(), vec.end(), x) - vec.begin();
        vec.erase(vec.begin() + index);
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return *min_element(vec.begin(), vec.end());
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