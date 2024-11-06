#include<bits/stdc++.h>
using namespace std;

int main(){
    //vector is a container which is dynamic in nature
    vector<int> v;//this line create an empty container{}
//two ways to insert an element
    v.push_back(1);//this pushes 1 into the vector 'v'

    v.emplace_back(5);/*this increase the size of v and pushes
    2 in the back*/
    //print vector like this & indexing start from zero
    cout<<"print vector"<<endl;
    cout<<v[1]<<endl;

    //using paris in vector

    vector<pair<int,int>> v1;
//storing pairs in vector
    v1.push_back({1,4});//use curly braces for push_back()
    v1.emplace_back(5,7);//don't curly braces for emplace_back()
     //printing pairs in vector
     cout<<"print paris in vector"<<endl;

     cout<<v1[1].second<<endl;

//defining vector container already containing  somethings
    //vec(10,500) --> 10 is the number of element and 500 is the element
    vector<int> vec(10,500);

    for(int i=0;i<10;i++){
        
        cout<<"This is the "<<i<<" element of vec "<<vec[i]<<endl;
    } 

/*you can also declare vector with garbage value or zero depends
upton compiler*/

    vector<int> vec1(5);
     for(int i=0;i<5;i++){
        
        cout<<"This is the "<<i<<" element of vec1 "<<vec1[i]<<endl;
    } 
//you can also contain a vector inside a vector

    vector<int>vec2(vec1);
    for(int i=0;i<5;i++){
        
        cout<<"This is the "<<i<<" element of vec2 "<<vec2[i]<<endl;
    } 
    
/*you can also increase size of vector even after declareing it using
push_back() and emplace_back()*/
    vec1.emplace_back(1);
    for(int i=0;i<6;i++){
        
        cout<<"This is the "<<i<<" element of vec1 after emplace"<<vec1[i]<<endl;
    } 



















//********************************************** */>iterators



/*iterators basically that they point to the memory address of that
perticular element*/
 //to use itereators in vectors
 /*v.begin points to the memory of the 0th element of the vector which can be 
 something like 6750*/
 //so the 1st element with be 6754  etc -- +4 byte or +32 bits for integer

    vector<int >::iterator i=v.begin();
    cout<<*i<<" ";
    i++;
    cout<<*(i)<<endl;//gives v[1]-- 5

    //to print adress of v[1] use &
    cout<<&*(i)<<" "<<endl;//gives adress of v[1]-- 

//other iterators are:-

//v.end() points to the memory location that is right aftrer the last element

    vector<int>::iterator it= v.end();
    /*v.rend() points to the memory location that is before the first element
it starts with last element then second last and goes to the memory location 
before first element*/
    //vector<int>::iterator it=v.rend();

/*v.rbegin is basicaly a reverse iterator it starts with last element and then
if iterator++ then second last third last upto the first element*/
    //vector<int>::iterator it= v.rbegin();

for(vector<int>:: iterator it =v.begin(); it!=v.end(); it++){
    cout<<*(it)<<endl;
}
// use "auto" instead of vector<int>:: iterator 
// using auto system automaticaly assigns a datatype according to the data

for(auto it =v.begin(); it!=v.end(); it++){
    cout<<*(it)<<endl;
}

for(auto it: v){
    cout<<it<<endl;
}










//to delete a value in vector

vector<int>v12={10,20,40,50,60};
for(int i=0;i<5;i++){
    cout<<v12[i]<<endl;
}
v12.erase(v12.begin()+1);
//before deleting 10 20  40 50 60
//after deleting  10 40 50 60

for(int i=0;i<4;i++){
    cout<<v12[i]<<endl;
}

//to delete multiple value --->v.erase[start,element after the end)
// [ x,y]---->means includin x and y 
// (x,y)----> means excluding x and y
vector<int>v13={10,20,40,50,60,70,80,90};
v13.erase(v13.begin()+1,v13.begin()+5);
for(auto it: v13){
    cout<<it<<endl;
}
//this will remove 20,40,50,60




//------------------------------------insert function

    vector<int>v(2,100); //(100,100)
//------------------insert single element
    v.insert(v.begin(),300);//(300,100,100,)
//inserting in a specefic position
    v.insert(v.begin()+2,300);//(100,100,300)

//------------------insert multiple element
    v.insert(v.begin(),3,4);//(4,4,4,100,100,)

//insert entire vector
    vector<int>vec(2,10);
    v.insert(v.begin(),vec.begin(),vec.end());//(10,10,100,100)


//size

    cout<<v.size();
//it pops out the last element
    v.pop_back();
//is swaps the vector
    v.swap(vec1);
//erase eniter vector

    v.clear();
//if vector has minimul of one element its says not empty(false) otherwise empty(true)

    v.empty();

    return 0;
}