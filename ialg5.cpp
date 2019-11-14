#include<iostream>
using namespace std;
int main()
{
	int n,k,r,i,s=0,j=1;
	cin>>n>>k>>r;

	while(1)
	{
		k=k-j*r;
		j=j+1;
		s=s+1;
		if(k<j*r)
		{break;
		}
		
	}
	if(s<n)
	{cout<<n-s;
	}
	else
	{cout<<0;
	}
	
}
