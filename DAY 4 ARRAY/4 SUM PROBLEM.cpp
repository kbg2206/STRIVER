class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      vector<int> out;
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                long long y=nums[i]+nums[j];
                for(int k=j+1,l=n-1;k<l;)
                {
                    long long int x=nums[k]+nums[l];
                    x=x+y;
                    if(x==target)
                    {
                        out.push_back(nums[i]);
                        out.push_back(nums[j]);
                        out.push_back(nums[k]);
                        out.push_back(nums[l]);
                        l--;
                        k++;
                    }
                    else if(x> target) l--;
                    else k++;
                    
                    if(out.size()>0) 
                    {
                        s.insert(out);
                        out.clear();
                    }
                    
                }
                
                
            }
        }
        //vector<int> v;
        for(auto it:s)
        {
            
            //v(s[i].begin(),s[i].end());
           ans.push_back(it);
        }
        //vector<char> v(s.begin(), s.end());
        return ans;
    }
};