#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long double dis(ll nx,ll ny,ll mx, ll my)
{return(sqrt((pow(nx-mx,2))+(pow(ny-my,2))));
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,k,i,j,x,y;
		cin>>x>>y;
		cin>>n>>m>>k;
		ll nn[n][2],mm[m][2],kk[k][2],r,z,idn;
		long double s=0.0,min=100000000000.001,max=100000000000.001,hu=100000000000.001,h,ss=0.0,pmo[n+1],ng,pnm[n+1][m+1],pmmd[m+1],pmoo[m+1],pnmo[m+1][n+1],pmndo[n+1];
		//cin>>x>>y;
		for(i=0;i<n;i++)
		{
			cin>>nn[i][0]>>nn[i][1];
		}
		for(i=0;i<m;i++)
		{cin>>mm[i][0]>>mm[i][1];
		}
		for(i=0;i<k;i++)
		{cin>>kk[i][0]>>kk[i][1];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				pnm[i][j]=sqrt((pow(nn[i][0]-mm[j][0],2))+(pow(nn[i][1]-mm[j][1],2)));
			}
		}
		for(i=0;i<n;i++)
		{
			pmo[i]=sqrt((pow(nn[i][0]-x,2))+(pow(nn[i][1]-y,2)));
		}
		for(i=0;i<m;i++)
		{hu=100000000000.001;
			for(j=0;j<k;j++)
			{//	hu=1000000000.001;
				ng=sqrt((pow(kk[j][0]-mm[i][0],2))+(pow(kk[j][1]-mm[i][1],2)));
				if(ng<hu)
				{hu=ng;
				}
				
			}pmmd[i]=hu;//cout<<pmmd[i]<<" ";
		}
		hu=100000000000.001;
		for(i=0;i<n;i++)
		{
			s=pmo[i];h=s;
			for(j=0;j<m;j++)
			{s=s+pnm[i][j]+pmmd[j];
			if(s<hu)
			{hu=s;
			}s=h;
			}s=0.0;
		}
		
		
		
		
		
		
				for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				pnmo[i][j]=sqrt((pow(nn[j][0]-mm[i][0],2))+(pow(nn[j][1]-mm[i][1],2)));
			}
		}
		for(i=0;i<m;i++)
		{
			pmoo[i]=sqrt((pow(mm[i][0]-x,2))+(pow(mm[i][1]-y,2)));
		}
		for(i=0;i<n;i++)
		{min=100000000000.001;
			for(j=0;j<k;j++)
			{//	hu=1000000000.001;
				ng=sqrt((pow(kk[j][0]-nn[i][0],2))+(pow(kk[j][1]-nn[i][1],2)));
				if(ng<min)
				{min=ng;
				}
				
			}pmndo[i]=min;//cout<<pmmd[i]<<" ";
		}
		//hu=1000000000.001;
		for(i=0;i<m;i++)
		{
			s=pmoo[i];h=s;
			for(j=0;j<n;j++)
			{s=s+pnmo[i][j]+pmndo[j];
			if(s<hu)
			{hu=s;
			}s=h;
			}s=0.0;
		}
		
		cout<<setprecision(12)<<hu<<endl;
	
	}
}
