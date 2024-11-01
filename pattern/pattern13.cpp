#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
   

    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        for(int j=0;j<n*2-2*i-2;j++){
            cout<<" ";
        }
        for(int j=i+1;j>=1;j--){
            cout<<j;
        }
        
        cout<<endl;
    }
    
}

int main(){
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
      int n;
      cin>>n;
      pattern(n);
   }
   
   return 0;
}