class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int> st;
        vector<int> arr;
        
        for(int i=0; i<a.size(); i++){
            st.insert(a[i]);
        }
        for(int i=0; i<b.size(); i++){
            st.insert(b[i]);
        }
        
        for(auto it: st){
            arr.push_back(it);
        }
        
        return arr;
    }
};