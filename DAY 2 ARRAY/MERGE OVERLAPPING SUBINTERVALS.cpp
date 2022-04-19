class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        //vector<int> out;
        sort(intervals.begin(),intervals.end());
        
        for(int i=0;i<intervals.size()-1;)
        {
            
            if(intervals[i][1]>=intervals[i+1][0])
            {
                if(intervals[i+1][1]>intervals[i][1])
                {
                    intervals[i+1][0]=intervals[i][0];
                }
                else
                {
                    intervals[i+1][0]=intervals[i][0];
                    intervals[i+1][1]=intervals[i][1];
                }
                ++i;
                
            }
            else
            {
                ans.push_back(intervals[i]);
                i++;
            }
            
        }
        ans.push_back(intervals[intervals.size()-1]);
        return ans;
    }
};