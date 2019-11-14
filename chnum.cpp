#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p,m=0,l=0,i,j,k,s=0,x=0;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{cin>>arr[i];
		}
		for(i=0;i<n;i++)
		{if(arr[i]>0)
		{m=m+1;
		s=1;
		}
		else
		{l=l+1;
		x=1;
		}
		}
		if(s==1 && x==0)
		{l=m;
		}
		else if(s==0 && x==1)
		{m=l;
		}
		if(l>m)
		{cout<<l<<" "<<m;
		}
		else
		{cout<<m<<" "<<l;
		}
		cout<<endl;
		
	}
	
	
	
}
