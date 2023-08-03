// https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {
    stack<int> first;
    stack<int> second;
public:
    MyQueue() {
        // nothing to do in constructor
    }
    
    void push(int x) {
        first.push(x);
    }
    
    int pop() {
        while(!first.empty())
        {
            int x = first.top();
            first.pop();
            second.push(x);
        }
        int res = second.top();
        second.pop();
        while(!second.empty())
        {
            int x = second.top();
            second.pop();
            first.push(x);
        }
        return res;
    }
    
    int peek() {
        while(!first.empty())
        {
            int x = first.top();
            first.pop();
            second.push(x);
        }
        int res = second.top();
        while(!second.empty())
        {
            int x = second.top();
            second.pop();
            first.push(x);
        }
        return res;
    }
    
    bool empty() {
        if(first.size()==0) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */