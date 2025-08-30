
class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int start = 1;
        int end = n;
        int res;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            int x = mid*mid;
            
            if(x==n){
                return mid;
            }
            if(x > n){
                end = mid-1;
            }
            else{
                res = mid;
                start = mid+1;
            }
        }
        return res;
    }
};











