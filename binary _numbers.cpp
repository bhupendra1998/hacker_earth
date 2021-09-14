#include<bits/stdc++.h>
using namespace std;
 
long long int arr[50]; 
string CodeGenerator (int N) {
 
   	string s="";
   	int f=0;
        
    for(int i=39;i>=0;i--){
        if(arr[i] <= N){
		    f=1;
            s=s+"1";
            N = N-arr[i];
            continue;
        }
            
        if(f==1)
            s=s+"0";       
    }
        
    return s;
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    arr[0]=1;
    arr[1]=2;
    
    for(int i=2;i<40;i++)
    {
        arr[i] = arr[i-1] + arr[i-2]; 
    }
    
    
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
 
        string out_;
        out_ = CodeGenerator(N);
        cout << out_;
        cout << "\n";
    }
}
