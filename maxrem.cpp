#include<iostream>
using namespace std;
int main()
{
	
	int i,j,n,p=0,x,s=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
		{
			if(arr[i]>p)
			{p=arr[i];
			}
		
			
		}
		for(i=0;i<n;i++)
		{
			if(arr[i]!=p)
			{
				if(arr[i]>s)
				{s=arr[i];
				}
			}
		}
		cout<<s;
	
}
