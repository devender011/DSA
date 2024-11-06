#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
  
    
    for(int i =0;i<n;i++){
        
        for(int j=0;j<=i;j++){
            char name='A'+n-i+j-1;
             cout<<name<<" ";
             
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