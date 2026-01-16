class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int, vector<int>, greater<int>> q;
        
        for(int i=0; i<arr.size(); i++){
            q.push(arr[i]);
        }
        
        int smallest;
        
        for(int i=1; i<=k; i++){
            smallest = q.top();
            q.pop();
        }
        
        return smallest;
    }
};