class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        double res;
        if(n%2 == 0){
            res = (arr[n/2] + arr[n/2 - 1])/2.0;
        }else{
            res = arr[n/2];
        }
        
        return res;
    }
};