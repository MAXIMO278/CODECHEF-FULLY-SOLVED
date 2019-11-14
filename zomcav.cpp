#include<iostream>
#include<algorithm>
int main()
{
using namespace std;
int t;
cin>>t;
int n;
while(t--)
{
cin>>n;
long pow[n];
long hel[n];
int arr[n]={0,};
long sum=0;
for(int i=0;i<n;i++)
{
cin>>pow[i];
int k=0;
int l=0;
if(i-pow[i]<0)
k=0;
else
k=i-pow[i];
if(i+pow[i]>n-1)
l=n-1;
else
l=i+pow[i];
sum+=(l-k+1);
}
long sum2=0;
for(int m=0;m<n;m++)
{cin>>hel[m];
sum2+=hel[m];
}
if(sum==sum2)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}
