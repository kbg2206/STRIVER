#include<bits/stdc++.h>
int subarraysXor(vector<int> &arr, int k)
{
    //    Write your code here.
	int n=arr.size();
	int ctr=0,xr=0;
	unordered_map<int,int> m;
	for(int i=0;i<n;++i)
	{
		xr=xr^arr[i];
		if(xr==k) ctr++;
		int y=xr^k;
		if(m.find(y)!=m.end())
		{
			ctr+=m[y];
		}
		m[xr]++;
	}
	return ctr;
}