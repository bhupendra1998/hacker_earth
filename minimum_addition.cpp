#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	ll int t;
	ll int n,k,c=0,avg1,i,summ=0;
	cin >> t;
	while(t--)
	{
		cin >>n >>k;
		ll int a[n] = {0};
		for(i=0;i<n;i++)
			{
				cin >> a[i];
				summ = summ+a[i];	
			}
		if(floor(summ/n) <=k)
			{
				cout<< 0 <<endl;
			}
		else
		{
			c = floor(summ/(k+1))-n+1;
			
		cout<<c<<endl;
		}
		
summ=0;
}
}
