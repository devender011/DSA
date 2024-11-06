#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l1;
    l1.push_back(2);//{2}

    l1.emplace_back(4);//{2,4}

    l1.push_front(5);//{5,2,4}

    l1.emplace_front(1);//{1,5,2,4}
//rest function same as vector ex begin end rbegin rend clear insert etc
    return 0;
}