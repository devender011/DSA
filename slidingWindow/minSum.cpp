#include <iostream>
#include<climits>
using namespace std;
#include<vector>
int main() {
    int target=7;
    vector<int> nums={2,3,1,2,4,3};
    
       int low=0;
       int high=0;
       int sum=0;
       int res=INT_MAX;
       while(high<nums.size()){
        sum+=nums[high];
        if(sum<target){
            high++;
        }
        else{
            if(res>high-low+1){
                res=high-low+1;
            }
            sum=sum-nums[low];
            low++;
        }}
       
       if(res>0){
        return res;
       }
    
        return 0;
       
   
}