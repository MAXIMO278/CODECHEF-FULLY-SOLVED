#include<bits/stdc++.h>
using  namespace std;
#define endl '\n'
typedef long long ll;
#define pb(x) push_back(x)
#define ce(x) cout << x << '\n';
#define pll  pair < ll, string >

#define rep(i,x,n,inc) for(i=x ; i<n ; i+=inc)
#define all(a)      (a).begin(),(a).end() 
#define mp(a,b) make_pair(a,b)
#define ff first
#define ss second
#define hell 1000000007
#define gh 1000000000000



int main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll too;
cin>>too;
while(too--)
{ll n,i,j,k,l;
	cin>>n; ll arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<arr[0]<<endl;
}
}
