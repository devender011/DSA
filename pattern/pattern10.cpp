#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<=(i<n?i:2*n-i-2);j++){
            cout<<"*";
     
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