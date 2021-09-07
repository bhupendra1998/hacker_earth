#include <bits/stdc++.h>
using namespace std;
int _MAX = 6; 
int _OFFSET = 2;
int matrix[6][6];
int maxHourglass = -63;
 
void hourglass(int i, int j){
        int tmp = 0; // current hourglass sum
        
        // sum top 3 and bottom 3 elements
        for(int k = j; k <= j + _OFFSET; k++){
            tmp += matrix[i][k]; 
            tmp += matrix[i + _OFFSET][k]; 
        }
        
        // sum middle element
        tmp += matrix[i + 1][j + 1]; 
        
        if(maxHourglass < tmp){
            maxHourglass = tmp;
        }
    }

int main() {
    
        for(int i=0; i < _MAX; i++){
            for(int j=0; j < _MAX; j++){
                cin>>matrix[i][j];
            }
        }
    
        for(int i=0; i < _MAX - _OFFSET; i++){
            for(int j=0; j < _MAX - _OFFSET; j++){
                hourglass(i, j);
            }
        }
        
   cout<<maxHourglass;
    }

