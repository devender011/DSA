#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s1;
//stack if LIFO (Last in frist out )
    s1.push(1);//{1}
    s1.push(4);//{4,1}
    s1.push(6);//{6,4,1}
    s1.emplace(5);//{5,6,4,1}
    cout<<s1.top()<<endl; //prints top element or last  in element
    //indexing is not alowed in stack s1[2]

    s1.pop(); //{6,4,1}

    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.empty()<<endl;//0-->false 1--->true

    stack<int>s2;
    s1.swap(s2);




    return 0;
}