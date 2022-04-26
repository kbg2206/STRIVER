class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ma=0,n=nums.size();
        int ctr=0;
        for(int i=0;i<n;++i )
        {
            if(nums[i])
            {
                ctr++;
            }
            else
            {
                ma=max(ma,ctr);
                ctr=0;
            }
        }
        if(ctr!=0) ma=max(ma,ctr);
        return ma;
        
    }
};