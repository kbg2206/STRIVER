class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> out;
  
        for(int i=0;i<numRows;++i)
        {
            for(int j=0;j<=i;++j)
            {
                if(j==0 || j==i) out.push_back(1);
                else
                {
                    
                    int x=ans[i-1][j-1]+ans[i-1][j];
                    out.push_back(x);
                    
                }
            }
            ans.push_back(out);
            out.clear();
        }
        return ans;
    }
};