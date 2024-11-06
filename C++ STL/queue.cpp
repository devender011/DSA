#include<bits/stdc++.h>
using namespace std;


int main(){

    queue<int> q;
    q.push(1);// {1}
    q.push(5);// {1,5}
    q.push(7);// {1,5,7}

    q.emplace(2);// {1,5,7,2}

    q.back() +=5; // add +5 to the last element 
    cout<<q.back()<<endl; // 2+5 =7 so it prints 7
    cout<<q.front()<<endl; // print the first value 1
    q.pop();//{5,7,2} it removes the first element because queue is fifo
    cout<<q.front(); // print the first value 5

    return 0;
}