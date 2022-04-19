// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long int arr[],long long int first,long long int middle,long long int last)
    {
        long long int i=first,ctr=0;
        long long int j=middle+1;
        long long int A[last-first+1],k=0;
        for(;i<=middle && j<=last;)
        {
            
            if(arr[i]<=arr[j])
            {
                A[k++]=arr[i++];
            }
            else
            {
                A[k++]=arr[j++];
                ctr+= middle-i+1;
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
            
            //cout<<arr[i]<<" ";
        }
        //cout<<"\n";
        return ctr;
        
    }
    long long int mergesort(long long arr[], long long N,long long i,long long j)
    {
        if(i==j) return 0;
        else
        {
            long long int mid=(i+j)/2;
            long long int a=mergesort(arr,N,i,mid);
            long long int b=mergesort(arr,N,mid+1,j);
            long long int c=merge(arr,i,mid,j);
            //cout<<a<<" "<<b<<" "<<c<<"\n";
            return a+b+c;
        }
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergesort(arr,N,0,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends