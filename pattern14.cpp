#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    int num=1;
    for(int i =0;i<n;i++){
        for(int j =0;j<i+1;j++){
            cout<<num<<" ";
            num=num+1;
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