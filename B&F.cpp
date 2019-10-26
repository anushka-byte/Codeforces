#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n, arr[100015];
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        ll ans=0, l=1, r=n;
        while(l<r){
            if(arr[l]==arr[r]){
                l+=1;
                r-=1;
            }
            else if(arr[l]<arr[r]){
                ans+=1;
                arr[l+1]+=arr[l];
                l+=1;
            }
            else{
                ans+=1;
                arr[r-1]+=arr[r];
                r-=1;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
