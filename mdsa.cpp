#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,th,x,n,s=0,i,j=0,p,l,max;
	cin>>t;
	while(t--)
	{
		cin>>n>>th;
		int a[n];
		for(i=0;i<n;i++)
		{cin>>a[i];
		}
		max=a[0];
		for(i=0;i<n;i++)
		{if(a[i]>max)
		{max=a[i];
		}
		}
		int m=max;
		
		while(1)
		{
			for(j=0;j<n;j++)
			{
				if((a[j]-m)>=0)
				{x=(a[j]-m);
				}
				else
				{x=0;
				}
				s=s+x;
				l=m;
				
				
			}
			if(s>=th)
			{
			break;
			}
			s=0;
			j=0;
			m=m-1;
			
		}
		
		
		cout<<m<<" "<<s<<endl;
		m=0;
		s=0;
		
	}
		
	
}
