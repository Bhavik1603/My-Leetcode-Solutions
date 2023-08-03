// https://leetcode.com/problems/implement-stack-using-queues

class MyStack {
    queue<int> qt1;
    queue<int> qt2;
public:
    MyStack() {
        // Nothing to do here
    }
    
    void push(int x) {
        qt1.push(x);
    }
    
    int pop() {
        while(qt1.size()!=1)
        {
            int x = qt1.front();
            qt1.pop();
            qt2.push(x);
        }
        int res = qt1.front();
        qt1.pop();
        while(!qt2.empty())
        {
            int x = qt2.front();
            qt2.pop();
            qt1.push(x);
        }
        return res; 
    }
    
    int top() {
        return qt1.back();
    }
    
    bool empty() {
        return qt1.empty();
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