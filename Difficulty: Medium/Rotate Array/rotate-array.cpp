




class Solution {
  public:
  
    void reverseArr(vector<int>& arr, int s, int e){
        while(s <= e){
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d = d % n;
        reverseArr(arr, 0, d-1);
        reverseArr(arr, d, n-1);
        reverseArr(arr, 0, n-1);
        
    }
};