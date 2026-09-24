class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        int maxi = 0;
        int count = 0;
        
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        
        int i,j = 0;
        while(i < arr.size() && j<dep.size()){
            if(arr[i] <= dep[j]){
                count++;
                maxi = max(maxi, count);
                i++;
            } else{
                count--;
                j++;
            }
        }
        
        return maxi;
    }
};
