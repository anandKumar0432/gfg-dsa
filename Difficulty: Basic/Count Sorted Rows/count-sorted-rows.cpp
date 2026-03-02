// User function Template for C++

class Solution {
  public:
  
    bool isSorted(int row, int size, vector<vector<int>> &Mat){
        
        bool incr = 1;
        bool decr = 1;
        for(int i=0; i<size-1; i++){
            if(Mat[row][i+1] <= Mat[row][i]){
                 incr = 0;
            }
        }
        for(int i=0; i<size-1; i++){
            if(Mat[row][i+1] >= Mat[row][i]){
                 decr = 0;
            }
        }
        
        return (incr || decr);
    }
    
    int sortedCount(int N, int M, vector<vector<int>> Mat) {
        
        int count = 0;
        for(int i=0; i<N; i++){
            if(isSorted(i, M, Mat)){
                count ++;
            }
        }
        
        return count;
    }
};