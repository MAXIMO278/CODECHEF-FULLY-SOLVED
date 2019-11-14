#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long i,j,k,c,s=0,p=1,a,r,b;
		cin>>a>>b;
		c=a+b;
		while(c>0)
		{
			r=c%10;
			c=c/10;
			if(r==0)
			{s=s+6;
			}
			if(r==1)
			{s=s+2;
			}
			if(r==2)
			{s=s+5;
			}
			if(r==3)
			{s=s+5;
			}
			if(r==4)
			{s=s+4;
			}
			if(r==5)
			{s=s+5;
			}
			if(r==6)
			{s=s+6;
			}
			if(r==7)
			{s=s+3;
			}
			if(r==8)
			{s=s+7;
			}
			if(r==9)
			{s=s+6;
			}
			
		}
		cout<<s<<endl;
		
	}
}
