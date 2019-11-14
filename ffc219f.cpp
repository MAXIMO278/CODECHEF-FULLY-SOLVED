#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p,q,r=0,i,j,k,s=0,x=0;
		cin>>n>>p;
		ll arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		if(arr[0]>p)
		{
			cout<<0<<endl;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				s=s+arr[i];
				x=x+1;
				if(s==p)
				{cout<<x<<endl;
				r=1;
				break;
				}
				else if(s>p)
				{
					cout<<x-1<<endl;
					r=1;
					break;
				}
				
				
			}
			if(r==0)
			{
			    cout<<n<<endl;
			}
		}
	
		
	}
}
