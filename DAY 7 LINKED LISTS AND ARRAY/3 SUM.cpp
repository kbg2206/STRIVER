class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> out;
        set<vector<int>> s;
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            if(i==0 || (i>0 && nums[i-1]!=nums[i]))
            {
                
            for(int j=i+1,k=n-1;j<k;)
            {
                if(nums[i]+nums[j]+nums[k]>0) k--;
                else if(nums[i]+nums[j]+nums[k]<0)j++;
                else
                {
                    out.push_back(nums[i]);
                    out.push_back(nums[j]);
                    out.push_back(nums[k]);
                    ans.push_back(out);
                    out.clear();
                    while(j<k && nums[j]==nums[j+1]) j++;
                    while(j<k && nums[k]==nums[k-1]) k--;
                    k--;
                    j++;
                }
            }
            }
        }
        /*
        for(auto it : ans)
        {
            s.insert(it);
        }
        ans.clear();
        for(auto it : s)
        {
            ans.push_back(it);
        }
        */
        return ans;
            
    }
};