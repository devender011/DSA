#include<bits/stdc++.h>
using namespace std;

int main(){
    //pair is considered a datatype
    //how to store pairs
    pair<int ,int > p={10,20};

    //how to print pairs elements
    cout<<"First element "<<p.first<<" "<<"Second element "<<p.second<<endl;

    //how to store more than 2 element in pair

    pair<int ,pair<int,int>> j={10,{20,30}};

    //how to print from multiple pair
    cout<<"First element "<<j.first<<" "<<
    "First element of second pair "<<j.second.first<< 
    " "<<"Second element of second pair "<<j.second.second<<endl;

    //store pairs in array
    pair<int ,int> arr[]={{1,2},{2,4},{4,6}};
    cout<<arr[0].second;

    return 0;
}