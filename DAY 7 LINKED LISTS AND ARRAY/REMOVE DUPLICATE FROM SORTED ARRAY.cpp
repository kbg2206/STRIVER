class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ctr=0;
        int n=nums.size();
        for(int i=0;i<n-1;++i)
        {
            if(nums[i]==nums[i+1])continue;
            else 
            {
                nums[ctr]=nums[i];
                ctr++;
            }
            
        }
        nums[ctr]=nums[n-1];
        ctr++;
       return ctr;
    }
};