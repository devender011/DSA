#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<i+i;j++){
            
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<n*2-2*i-2;j++){
            
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
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
   
   return 0;}