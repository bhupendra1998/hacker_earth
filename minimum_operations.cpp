#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll int n,i,c = 0;
	cin>> n;
	ll int a[n+1]={0};
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		
			if(a[i]!=a[i+1])
			{	
				c=c+1;	
			}
			else
				continue;	
		
	
	}
	cout<<c;
}
	
		
