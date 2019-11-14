#include<bits/stdc++.h>
using namespace std;
typedef long long ull;
int main()
{
	ull t;
	cin>>t;
	while(t--)
	{
		ull n, m,i,z,x,j,k,p=0,q=0,s=0,ans;
		double temp;
		cin>>n>>m;
		if(m>(n*(n+1)/2))
		{cout<<-1<<endl;
		}
		else if(n==1 && m==0)
		{
		cout<<0<<endl;
	}
		else if(m==0)
		{cout<<-1<<endl;
		}
		else if(n==1)
		{cout<<1<<endl;
		}
		else if(n==2)
		{
			if(m==1)
			{cout<<1<<endl;
			}
			else if(m==2 || m==3)
			{cout<<2<<endl;
			}
		}
		else if(m<(n-1))
		{cout<<-1<<endl;
		}
		else if(m==n-1 || m==n ||m==n+1)
		{
			cout<<2<<endl;
		}
		else if(m>n+1 && m<=2*n)
		{cout<<3<<endl;
		}
		else
		{
			k=m-2*n;
			ans=4;
			temp=0;
			if(n%2==0)
			{
				temp=k/((floor)((double)n/2));
				if(temp==(floor)((double)k/(floor)((double)n/2)))
				{temp-=1;
				}
				cout<<ans+(ull)temp<<endl;
			}
			else
			{
				temp=(floor)((double)k/n);
				if(temp==(double)k/n)
				{temp-=1;
				}
				temp*=2;
				if(k%n>((floor)((double)n/2)) || k%n==0)
				{temp+=1;
				}
				cout<<ans+(ull)temp<<endl;
			}
			
		}
	}
}
