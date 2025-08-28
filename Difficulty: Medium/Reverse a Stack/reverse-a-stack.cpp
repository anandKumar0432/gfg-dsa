
class Solution {
  public:
  
    void insertAtBottom(stack<int> &St, int &item){
        if(St.empty()){
            St.push(item);
            return;
        }
        
        int top = St.top();
        St.pop();
        insertAtBottom(St,item);
        St.push(top);
    }
    void reverse(stack<int> &St) {
        // code here
        if(St.empty()){
            return;
        }
        
        int top = St.top();
        St.pop();
        reverse(St);
        insertAtBottom(St,top);
    }
};