class Solution {
  public:
    int possible(vector<int>& stalls , int k, int mid){
        int cow = stalls[0];
        int count = 1;
        for(int i = 1; i<stalls.size(); i++){
            if(cow+mid <= stalls[i]){
                count++;
                cow = stalls[i];
            }
        }
        if(count < k){
            return false;
        }
        return true;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int n = stalls.size();
        int start = 1;
        int end = stalls[n-1] - stalls[0];
        int result = 0;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            if(possible(stalls, k, mid)){
                start = mid + 1;
                result = mid;
            }else{
                end = mid - 1;
            }
        }
        return result;
    }
};