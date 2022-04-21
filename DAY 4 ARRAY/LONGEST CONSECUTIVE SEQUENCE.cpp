class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set<int> s(nums.begin(),nums.end());
        int ctr=0;
        for(auto it : s)
        {
            if(! s.count(it-1))
            {
                int x=it;
                int ctr2=1;
                while(s.count(x+1))
                {
                    ctr2++;
                    x=x+1;
                }
                ctr=max(ctr,ctr2);
            }
        }
        return ctr;
    }
};