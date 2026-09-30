class Solution {
  public:
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        // code here
        int n = s.size();
        vector<vector<int>> intervals(n, vector<int>(3));
        
        for(int i=0; i<n; i++){
            intervals[i][0] = s[i];
            intervals[i][1] = f[i];
            intervals[i][2] = i+1;
        }
        
        sort(intervals.begin(), intervals.end(), [](vector<int>&a, vector<int>&b){
            return a[1] < b[1];
        });
        
        int count = 1;
        int lastEndTime = intervals[0][1];
        vector<int> res;
        res.push_back(intervals[0][2]);
        
        for(int i=0; i<n; i++){
            if(intervals[i][0] > lastEndTime){
                count++;
                lastEndTime = intervals[i][1];
                res.push_back(intervals[i][2]);
            }
        }
        
        sort(res.begin(), res.end());
        
        return res;
    }
};