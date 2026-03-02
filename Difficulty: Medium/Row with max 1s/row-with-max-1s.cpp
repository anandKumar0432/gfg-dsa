// User function template for C++
class Solution {
  public:
  
    int countOnes(int row, int col, vector<vector<int>> &arr){
        
        int count = 0;
        for(int i = 0; i<col; i++){
            if(arr[row][i] == 1) count++;
        }
        
        return count;
    }
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int row = arr.size();
        int maxi = 0;
        int maxIndex = -1;
        
        for(int i = 0; i < row; i++){
            int col = arr[i].size();
            if(countOnes(i, col, arr) > maxi){
                maxi = countOnes(i, col, arr);
                maxIndex = i;
            }
        }
        
        return maxIndex;
    }
};