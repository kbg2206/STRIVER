class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2,j=nums.size()-1;
        int n=nums.size();
        int index1=-1,index2=-1;
        for(;i>=0;--i)
        {
            if(nums[i]<nums[i+1]) {index1=i; break;}
        }
        if(index1!=-1)
        {
            for(;j>=0;--j)
            {
                if(nums[j]>nums[index1]) {index2=j;break;}
            }
        }
        
        
        if(index1==-1)
        {
            reverse(nums.begin(),nums.end());
        }
        else if(index2==-1)
        {
            reverse(nums.begin()+index1,nums.end());
        }
        else
        {
            swap(nums[index1],nums[index2]);
            reverse(nums.begin()+index1+1,nums.end());
        }
    }
};