class Solution {
  public:
    
    void reverse(stack<int> & st, int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        int top = st.top();
        st.pop();
        reverse(st, x);
        st.push(top);
    }
    void reverseStack(stack<int> &st) {
        // code here
        if(st.empty()){
            return;
        }
        
        int top = st.top();
        st.pop();
        reverseStack(st);
        
        reverse(st, top);
    }
};