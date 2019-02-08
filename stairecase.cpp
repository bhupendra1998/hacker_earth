#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[5],i,c=0,b[100],t=0,j,n=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];   
        c =c + a[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	b[i]=c - a[i];
    	//cout<<b[i]<<endl;
    }
   
   sort(b , b+n);
   
    
    cout<<b[0]<<" "<<b[n-1];
    return 0;
}