// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int row = arr.size();
        int col = arr[0].size();
        int result = -1;
        int maxi = INT_MIN;
        for(int i=0; i<row; i++){
            int start = 0;
            int end = col-1;
            int nOf1 = -1;
            while(start <= end){
                int mid = start + (end - start)/2;
                if(arr[i][mid] == 1){
                    nOf1 = col - mid;
                    end = mid-1;
                }else{
                    start = mid + 1;
                }
            }
            if(nOf1 > maxi){
                result = i;
                maxi = nOf1;
            }
            
        }
        
        return result;
    }
};