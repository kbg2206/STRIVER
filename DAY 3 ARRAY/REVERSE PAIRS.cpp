class Solution {
public:
        long long int merge(vector<int> &arr,long long int first,long long int middle,long long int last)
    {
        long long int i=first,ctr=0;
        long long int j=middle+1;
        long long int A[last-first+1],k=0;
            
            for(i=first;i<=middle;++i)
            {
                //cout<<arr[i]<<" "<<arr[j]<<"\n";
                while(j<=last && arr[i]>((long long int)2 * arr[j])) j++;
               
                ctr+= (j-(middle+1));
                
            }
           
            
            
            
            i=first;
            j=middle+1;
        for(;i<=middle && j<=last;)
        {
             
            if(arr[i]<=arr[j])
            {
                A[k++]=arr[i++];
                
            }
            else
            {
                A[k++]=arr[j++];
                
            }
        }
        while(i<=middle)
        {
            A[k++]=arr[i++];
        }
        while(j<=last)
        {
            A[k++]=arr[j++];
        }
        k=0;
        for(int i=first;i<=last;++i)
        {
            arr[i]=A[k++];
        }
        
        return ctr;
        
    }
    long long int mergesort(vector<int>& arr, long long N,long long i,long long j)
    {
        if(i==j) return 0;
        else
        {
            long long int mid=(i+j)/2;
            long long int a=mergesort(arr,N,i,mid);
            long long int b=mergesort(arr,N,mid+1,j);
            long long int c=merge(arr,i,mid,j);
            return a+b+c;
        }
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,nums.size(),0,nums.size()-1);
    }
};