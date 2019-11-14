#include<bits/stdc++.h>
using  namespace std;

#define endl '\n'
#define ll long long
#define re register
#define pb(x) push_back(x)
#define ce(x) cout << x << endl;

using db = double;
using pii = pair < int, int >;
using pll = pair < ll, ll >;
#define scl1(a)             scanf(“%I64d", &a)
#define scl2(a, b)          scanf("%lld %lld", &a, &b)

#define rep(i,x,n,inc) for(i=x ; i<n ; i+=inc)
#define repr(i,x,n,inc) for( i=x ; i>n ; i+=inc)
#define all(a)      (a).begin(),(a).end()
#define rall(x) (x).rbegin(), (x).rend()
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))

#define mp(a,b) make_pair(a,b)
#define ff first
#define ss second
#define hell 1000000007
const db pi = acos(-1);
const long long infl = LLONG_MAX;
const int inf = 0x3f3f3f3f;

#define Foxen(i,s) for (i=s.begin(); i!=s.end(); i++)
#define Fill(s,v) memset(s,v,sizeof(s))
#define cout_p(x, p) cout << fixed << setprecision((p)) << x << endl     //print with precision

#define tc(tt) \
    ll tt;    \
    cin >> tt; \
    for (ll _tt = 0; _tt < tt; _tt++) // testcase   

int32_t main(){

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll t,i,x,j,y,z,k,n,s,e;

tc(tt){
	cin>>n;		cin>>k;
	ll a[n],b[n];	z=3*n;
	
	rep(i,0,n,1)	cin>>a[i];
	rep(i,0,n,1)	b[i]=a[i];
	if(n%2){
		z=(n+1)/2;
		if(k< ((3*n)+z) ){
			// ce("k<3*n+z")
			rep(i,0,k,1){
				x=i%n , y=n-1-(i%n) ;
				b[x]=b[x]^b[y];
			}
		}
		else{
			rep(i,0,(3*n)+z,1){
				x=i%n , y=n-1-(i%n) ;
				b[x]=b[x]^b[y];
			}
			s=((k-z)/(3*n))*(3*n)+z;
			e=k;
			rep(i,s,e,1){
				x=i%n , y=n-1-(i%n) ;
				b[x]=b[x]^b[y];
			}
		}
	}
	else{
		z=(3*n);
		if(k<(3*n)){
			rep(i,0,k,1){
				x=i%n , y=n-1-(i%n) ;
				b[x]=b[x]^b[y];
			}
		}
		else{
			s=(k/(3*n))*(3*n);
			e=k;
			rep(i,s,e,1){
				x=i%n , y=n-1-(i%n) ;
				b[x]=b[x]^b[y];
			}
		}
	}
	rep(i,0,n,1)	cout<<b[i]<<" ";
	ce("")
}
}
