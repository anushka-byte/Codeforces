#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ll n, a[100005], a1[100005], a2[100003],
p1[100005], p2[100005], maxi=-100000000000;
 
int main()
{
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	for(int i=1; i<n; i++)
	{
		a1[i] = abs(a[i]-a[i+1]);
		a2[i] = -a1[i];
	}
	for(int i=1; i<n; i++)
	{
		if(i%2)
		{
			p1[i] = max(p1[i-1] + a1[i], a1[i]);
			p2[i] = max(p2[i-1] + a2[i], a2[i]);
		}
		else
		{
			p1[i] = max(p1[i-1] + a2[i], a2[i]);
			p2[i] = max(p2[i-1] + a1[i], a1[i]);
		}
		maxi = max(maxi, max(p1[i], p2[i]));
	}
	// for(int i=1; i<n; i++)
	// 	cout<<p1[i]<<" ";
	// cout<<endl;
	// for(int i=1; i<n; i++)
	// 	cout<<p2[i]<<" ";
	// cout<<endl;
	cout<<maxi;
	return 0;
}
