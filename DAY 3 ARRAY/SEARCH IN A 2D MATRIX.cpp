class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=m-1,j=0;i>=0 && j<n;)
        {
            if(matrix[i][j]<target)
            {
                j++;
            }
            else if(matrix[i][j]>target) i--;
            else return true;
        }
        return false;
    }
};