// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int* findTwoElement(int arr[], int n) {
        // code here
        long long int s=(n*(n+1))/2;
        long long int p=(n*(n+1)*(2*n+1))/6;
        for(int i=0;i<n;++i)
        {
            s-=(long long int)arr[i];
            p-=((long long int)arr[i]*(long long int)arr[i]);
        }
        long long int rep=((p/s)-s)/2;
        long long int miss=rep+s;
        
         int* ar = new int[2];
         ar[0]=rep;
         ar[1]=miss;
        return ar;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends