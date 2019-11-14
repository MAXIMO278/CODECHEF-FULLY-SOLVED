#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define p 1000000007
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll i,j,a,b,c,k,s=0,m=0,n;
		cin>>n;
		vector<string> v;
		string str;
		for(i=0;i<n;i++)
		{
			cin>>str;
			k=str.size();
			v.push_back(str);
		}
		
		for(i=0;i<k;i++)
		{
			for(j=0;j<n;j++)
			{
				if(v[j][i]=='1')
				{m=m+1;
				}
			}
			if(m%2==1)
			{s=s+1;
			}
			m=0;
		}
		cout<<s<<endl;
		
	
	}
}
