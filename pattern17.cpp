#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
  
    
    for(int i =0;i<n;i++){
        char ch='A';
        
        for (int j = 0; j<n-1-i ; j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            if(j<(2*i+1)/2){
                ch++;
            }
            else{ch--;}
            
        }
        for (int j = 0; j<n-1-i ; j++)
        {
            cout<<" ";
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