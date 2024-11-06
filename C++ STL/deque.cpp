#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d1;
    d1.push_back(2);//{2}

    d1.emplace_back(4);//{2,4}

    d1.push_front(5);//{5,2,4}

    d1.emplace_front(3);//{3,5,2,4}
//rest function same as vector ex begin end rbegin rend clear insert etc
    return 0;
}