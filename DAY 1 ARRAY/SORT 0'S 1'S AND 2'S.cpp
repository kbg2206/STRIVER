//approch 1 :- using sort function
//approach 2:- count the number of 0,1 and 2's and fill the array

//approch 3
// DUTCH NATIONAL FLAG ALGORITHM 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=nums.size()-1,k=0;
        
        while(k<=j )
        {
            if(nums[k]==1) k++;
            else if(nums[k]==0)
            {
                swap(nums[i],nums[k]);
                i++;
                k++;
            }
            else
            {
                swap(nums[j],nums[k]);
                j--;
            }
     
        }
    }
};