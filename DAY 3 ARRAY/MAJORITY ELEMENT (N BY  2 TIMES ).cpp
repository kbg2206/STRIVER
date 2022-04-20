class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int ele=0,ctr=0;
        for(int i=0;i<nums.size();++i)
        {
            if(ctr==0)
            {
                ele=nums[i];
                ctr++;
            }
            else if(nums[i]==ele) ctr++;
            else
                ctr--;
        }
        return ele;
         
    }
};