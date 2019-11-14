#include<iostream>
#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
long long int limit =1000000000000;

long long int ev(long long int base,string s){
	cpp_int b=1,final_product=0;
	long long  si=s.size();
	for(int i=si-1;i>=0;i--){
		long long t;
		if(s[i]>='0' && s[i]<='9')
		{
			t=s[i]-'0';
		}
		else
		{
			t=s[i]-'A'+10;
		}
		if(t>=base)
		return -1;
		final_product += t*b;
		b*=base;
		if(final_product>limit)
		{
			return -1;
		}
	}
	return final_product.template convert_to<long long >();
}

void fill_mp(string str,long long int b,map<long long int,long long int> &mp,long long int &result)
{
	if(b==-1)
	{
		set<long long> st;
		for(int base=1;base<=36;base++)
		{
			long long decimal_value;
			decimal_value=ev(base,str);
			if(decimal_value != -1)
			{
				if(st.find(decimal_value)==st.end())
				{
					st.insert(decimal_value);
					mp[decimal_value]++;
				}
			}
		}
		st.clear();
	}
	else
	{
		long long decimal_value;
		decimal_value=ev(b,str);
		if(decimal_value!=-1)
		{
		 mp[decimal_value]++;
		 result =decimal_value;
		}
	}
}
int main() {
	int tt;
	cin>>tt;
	while(tt--){
		
	long long  n;
	cin>>n;
	map<long long ,long long > mp;
	long long  r=-1;
	for(int i=0;i<n;i++)
	{
		long long  b;
		string str;
		cin>>b;
		cin>>str;
		fill_mp(str,b,mp,r);
	}
	if(r==-1){
	for(map<long long ,long long >:: iterator it = mp.begin();it!=mp.end();it++)
	{
		if(it->second == n)
		{
			r = it->first;
			break;
		}
	}
	cout<<r<<"\n";
	}
	else
	{
		if(mp[r]==n)
		{
			cout<<r<<"\n";
		}
		else
		{
			cout<<"-1\n";
		}
	}
	mp.clear();
	}
}
