#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,x,m,n,t,A[250001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        cin>>A[i];
        for(i=1;i<n;i++)
        {
            m=ceil(A[i-1]/double(A[i]));
            A[i]=m*A[i];
        }
        for(i=0;i<n;i++)
        cout<<A[i]<<" ";
        cout<<"\n";
    }
}
