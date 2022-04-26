class Solution {
public:
    int trap(vector<int>& height) {
        int i;
        int n=height.size();
        if(n==1) return 0;
        for(i=0;i<n;++i)
        {
            if(height[i]!=0) break;
        }
        long long int ans=0,sum=0,pos,prev=0,pos2=0;
        int ma=height[i];
        pos=i;
        for(int j=i+1;j<n;++j)
        {
             if(ma<height[j])
             {
                 ma=height[j];
                 pos=j;
             }
        }
        int x=height[i];
        for(int j=i+1;j<=pos;++j)
        {
            if(x<=height[j])
            {
                ans+= x*prev-sum;
                x=height[j];
                prev=0;
                sum=0;
            }
            else
            {
                prev++;
                sum+=height[j];
            }
        }
        
        cout<<ans<<"\n";
         
        
        
        for(i=n-1;i>=pos;--i)
        {
            if(height[i]!=0) break;
        }
        x=height[i];
        sum=0;
        prev=0;
        for(int j=i-1;j>=pos;--j)
        {
            if(x<=height[j])
            {
                ans+= x*prev-sum;
                x=height[j];
                prev=0;
                sum=0;
            }
            else
            {
                prev++;
                sum+=height[j];
            }
        }
        return ans;
            
    }
};