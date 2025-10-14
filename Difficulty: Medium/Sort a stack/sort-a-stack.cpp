class Solution {
  public:
  
    void sortedInsert(stack<int> &st, int x){
        if(st.empty() || st.top() < x){
            st.push(x);
            return;
        }
        
        int top = st.top();
        st.pop();
        sortedInsert(st, x);
        st.push(top);
    }
    void sortStack(stack<int> &st) {
        // code here
        if(st.empty()){
            return;
        }
        
        int top = st.top(); 
        st.pop();
        
        sortStack(st);
        sortedInsert(st, top);
    }
};
