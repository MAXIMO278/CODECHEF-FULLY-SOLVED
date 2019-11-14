#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n,p=0,s=0,i=0;
	
		char str[100000];
		cin>>str;
		p=strlen(str);
		
		for(i=0;i<p;i++)
		{if(str[i]=='1')
		{s=s+1;
		}
		}
		
		if(s%2==0)
		{cout<<"LOSE";
		
		}
		else
		{cout<<"WIN";
		}
		cout<<endl;
	}
	
	
	
}
