#include<bits/stdc++.h>
using  namespace std;

#define endl '\n'
#define ll long long
#define re register
#define pb(x) push_back(x)
#define ce(x) cout << x << endl;

using db = long double;
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

ll t,i,x,j,y,z,k,n,m;

tc(tt){
	cin>>n>>m;
	vector<pll> v;
	ll a[n+1]={0},d[n+1]={0};
	rep(i,0,m,1){
		cin>>x>>y;
		d[x]++;
		d[y]++;
		v.pb(mp(x,y));
	}
	if(m%2==0){
		cout<<1<<endl;
		rep(i,0,n,1){
			cout<<1<<" ";
		}
		cout<<endl;
	}
	else{
		bool br=true;
		rep(i,1,n+1,1){
			br=br&&(d[i]%2==0);
		}
		if(br){
			rep(i,0,m,1){
				if(d[v[i].ff]%2==0 && d[v[i].ss]%2==0){
					a[v[i].ff]=2;
					a[v[i].ss]=3;
					break;
				}
			}
			cout<<3<<endl;
			rep(i,1,n+1,1){
				if(a[i]==0)	a[i]=1;
				cout<<a[i]<<" ";
			}		cout<<endl;
		}
		else{
			rep(i,1,n+1,1){
				if(d[i]%2){
					a[i]=2;
					break;
				}
			}
			
			cout<<2<<endl;
			rep(i,1,n+1,1){
				if(a[i]==0)	a[i]=1;
				cout<<a[i]<<" ";
			}		cout<<endl;
		}
	}
}
}
