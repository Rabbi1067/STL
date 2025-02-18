#include<bits/stdc++.h>
using namespace std;
int main(){
list<int>a;
a.push_back(10);
a.push_back(10);
a.push_back(10);
a.push_back(20);
a.push_back(30);
a.push_back(40);
a.push_back(50);
a.push_back(60);
for(auto b:a){
    cout<<b<<" ";
}
cout<<endl;
//1st value k return korbe
cout<<a.front()<<endl;
//last value k return korbe
cout<<a.back()<<endl;
//remove kora
a.pop_front();
for(auto b:a){
    cout<<b<<" ";
}
cout<<endl;
a.pop_back();
for(auto b:a){
    cout<<b<<" ";
}
cout<<endl;
a.remove(30);
for(auto b:a){
    cout<<b<<" ";
}
cout<<endl;

a.reverse();
for(auto b:a){
    cout<<b<<" ";
}
cout<<endl;
//sort
a.sort();
for(auto b:a){
    cout<<b<<" ";
}
cout<<endl;
//unique -pasha pashi aki value thakbe na
a.unique();
for(auto b:a){
    cout<<b<<" ";
}
cout<<endl;
return 0;
}
