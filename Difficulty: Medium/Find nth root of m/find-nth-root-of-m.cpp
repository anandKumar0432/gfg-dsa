class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int start = 1;
        int end = m;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            int power = pow(mid, n);
            
            if(power==m){
                return mid;
            }else if(power > m){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return -1;
    }
};