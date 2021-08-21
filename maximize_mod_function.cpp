#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
        cin>>t;
        while(t--)
        {
         ll int m=0,k=0,i=0,c=0,l=0,p=0,max=0,r=0,x=0,g=0,hole_r=0;
          
           cin>>m>>k;
           ll int s[m]={0};
           ll int b[m]={0};
           string str;
           cin>>str;// cin>>str;
           // cout<<str;
           x = stoll(str, nullptr, 10);
           g = x;
          //  cout<<g;
                
           if(0<g&&g<k)
                   {
                       r = g%k;
                       cout<<r<<endl;
                       r=0;
                   }
           if(g<0)
                   {
                       r = k+g;
                       cout<<r<<endl;
                       r=0;
                   }
           if(g>=k)
                   {

                    for(i=m-1;i>=0;i--)
                    {
                        s[i] = x%10;
                        x = x/10;

                    }
                    p = m;
                    for(i=0;i<m;i++)
                    {   
                        for(l=0;l<m;)
                        {

                            if(i==l){
                                l++;
                            }
                            else{
                                c= c + s[l]*(pow(10,(p-2)));
                                p--;
                                l++;
                            }
                        }
                        b[i] = c;
                        c=0;
                        p=m;
                    }
                    hole_r = g%k;
                    max = -1;
                    for(i=0;i<m;i++)
                     {  
                         r = (b[i]%k);
                         if(r>=max)
                              max = r;
                        r=0;
                     }
                        max =  hole_r>max?hole_r:max;
                        cout<<max<<endl;
                     }
        }
    return 0;
}
