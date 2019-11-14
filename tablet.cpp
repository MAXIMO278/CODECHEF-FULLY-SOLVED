#include<iostream>
using namespace std;
int main()
{
	int i,j,b,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>b;
		int w[n],h[n],p[n],max=0,s=0;
		for(i=0;i<n;i++)
		{cin>>w[i]>>h[i]>>p[i];
		
		}
		for(i=0;i<n;i++)
		{if(p[i]<=b && (w[i]*h[i]>max))
			{max=w[i]*h[i];
			s=1;
			}
		}
		if(s==0)
		{cout<<"no tablet";
		}
		else
		{cout<<max;
		}
		
		
		cout<<endl;
		
	}
	
	
	
	
}
