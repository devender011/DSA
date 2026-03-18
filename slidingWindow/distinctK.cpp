    #include <unordered_map>
    #include<string>
    #include<climits>
    #include <iostream>
    using namespace std;
    
    int longestKSubstr(string &s, int k) {
       int low=0;int high=0;int res=INT_MIN;
       //hashmap for counting frequency
       unordered_map<char, int> f;
       
       //main loop
       while(high<s.size()){
           //first step to add frequency in hashmap
          f[s[high]]++;
          //if frequency is = k
           if(f.size()==k){
               int len=high-low+1;
               res=max(res,len);
           }
           // if frequency is > k
           if(f.size()>k){
               f[s[low]]--;
               if(f[s[low]]==0){
                   f.erase(s[low]);
               }
               low++;
           }
       high++;
       }
        if(res==INT_MIN){
            return -1;
        }
        return res;
    };

    int main() {
        string s="aaaa";
        int k=2;
        int res=longestKSubstr(s,k);
        cout<<res;
        return 0;
    }