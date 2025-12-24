class Solution {
  public:
    int getPrecedence(char ch){
        if(ch == '+' || ch == '-')
            return 1;
        else if(ch == '*' || ch == '/')
            return 2;
        else if(ch == '^')
            return 3;
        else return -1;    
    }
    string infixToPostfix(string& s) {
        // code here
        int i = 0;
        string result = "";
        stack<char> st;
        while(i < s.size()){
            if(isalnum(s[i])) {
                result += s[i];
            } else if(s[i] == '('){
                st.push(s[i]);
            } else if(s[i] == ')'){
                while(!st.empty() && st.top() != '('){
                    result+=st.top();
                    st.pop();
                }
                st.pop();
            } else {
                while(!st.empty() && (getPrecedence(st.top()) > getPrecedence(s[i]) ||
                      (getPrecedence(st.top()) == getPrecedence(s[i]) && s[i] != '^'))){
                    result += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            i++;
        }
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        
        return result;
    }
};
