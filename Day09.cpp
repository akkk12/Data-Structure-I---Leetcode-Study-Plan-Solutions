// 20. Valid Parentheses
// https://leetcode.com/problems/valid-parentheses/

 bool isValid(string s) {
        stack<char> st;
        for(char a : s){
            if( a == '(' || a == '{' || a == '[' ) st.push(a);
            else 
            {char top = st.top() ;
                if(st.empty() || top == '(' && a != ')' || top == '[' && a != ']' || top == '{' && a != '}')
                    return false ;
             st.pop();
            }
        }
        return st.empty() ; 
    }

// 232. Implement Queue using Stacks
// https://leetcode.com/problems/implement-queue-using-stacks/ 
class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    stack<int> s1 ;
    stack<int> s2 ; 
    /** Push element x to the back of queue. */
    void push(int x) {
        while(!s2.empty()){
            int top = s2.top();
            s1.push(top);
            s2.pop() ;
        }
        s2.push(x);
        while(!s1.empty()){
            int top = s1.top();
            s2.push(top);
            s1.pop() ;
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(!s2.empty()){
        int top = s2.top();
        s2.pop() ;
        return top ;}
        return -1 ;
    }
    
    /** Get the front element. */
    int peek() {
         if(!s2.empty()){
        int top = s2.top();
       
        return top ;}
        return -1 ;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s2.empty() ;
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
