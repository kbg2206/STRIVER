class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;++i)
        {
            for(int j=i;j<n;++j)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        /*
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        */
        int a=0,b=n-1;
        while(a<b)
        {
            for(int i=0;i<n;++i)
            {
                swap(matrix[i][a],matrix[i][b]);
            }
            a++;
            b--;
        }
    }
};