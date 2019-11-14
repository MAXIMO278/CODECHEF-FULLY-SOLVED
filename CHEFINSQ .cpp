#include<bits/stdc++.h>
using namespace std;
void printNcR(long long n, long long r) 
{ 
    long long p = 1, k = 1; 
  
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
           
            long long m = __gcd(p, k); 
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
  
    } 
  
    else
        p = 1; 
  
    cout << p << endl; 
} 
  
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long i,n,k,j,loc,temp,min,l=0,p=0,m=0,mm=0,mn=0,nm=0,q=1,z=1,zo=0;
		cin>>n;
		cin>>k;
	long long arr[n],a[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(i=0;i<n;i++)
		{
			a[i]=arr[i];
		}
 	
	sort(a,a+n);
	
	min=a[k-1];
  long long  ro=0,ct=0,cb=0,cz=0,ko,kc,kb,ror;
  for(i=k;i<n;i++)
  {
  	if(a[i]==min)
  	{ct++;
  	ro=1;
	  }
	  else
	  {break;
	  }
  }
  for(i=k-1;i>=0;i--)
  {
  	if(a[i]==min)
  	{cb++;
	  }
	  else
	  {break;
	  }
  }
  cz=cb+ct;
  if(ro==0)
  {cout<<1<<endl;
  }
  else
  {
  printNcR( cz,  cb) ;
  
  }
  
	}
}
