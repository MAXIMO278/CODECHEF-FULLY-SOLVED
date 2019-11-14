#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			long long n,ll=0,no=0,noo=0,d,s=0,x=0,z=0,i,r=0,j=0,k,h=0,l,min=0,q=9,p=9,ng=0;
			cin>>n>>d;
			no=n;
			noo=n;
			while(1)
				{
					s=s+1;
					no=no/10;
					if(no==0)
						{
							break;
						}
					
				}
				long long arr[s],ar[s];
				
			for(i=s-1;i>=0;i--)
				{
					arr[i]=noo%10;
					noo=noo/10;
				}
			for(i=0;i<s;i++)
				{
					if(arr[i]<=q && arr[i]!=0)
						{
							min=arr[i];
							q=arr[i];
						}
				}
			
			while(1)
				{
					if(min>=d)
						{
							break;
						}
					for(i=r;i<s;i++)
						{
							if(arr[i]==min)
								{
									ar[j]=min;
									j=j+1;
									z=z+1;
									r=h+1;
								}
							h=h+1;
						}
						h=r;
						ll=ll+1;
						if(ar[j-1]==arr[s-1])
							{break;
							}
					
					if(j==s)
					{
						break;
					}
					for(i=r;i<s;i++)
						{
							if(arr[i]<=p && arr[i]!=0)
								{
									min=arr[i];
									p=arr[i];
								}
								
						}
					p=9;
				}
				for(i=j;i<s;i++)
					{ar[i]=d;
					}
				for(i=0;i<s;i++)
					{
						ng=ng*10+ar[i];
					}
					cout<<ng<<endl;
		}
	
}
