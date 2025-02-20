#include<bits/stdc++.h>
using namespace std;
int main(){
map<int,int>a;
a.insert({1,10});
a.insert({2,20});
a.insert({3,30});
a[5]=50;
a.insert({4,40});

cout<<a.at(2)<<endl;
cout<<a[3]<<endl;
cout<<a.size()<<endl;
//print man always sort hoye print hobe
for(auto b:a){
    cout<<b.first<<" "<<b.second<<endl;
}
int cnt=a.count(4);
cout<<cnt<<endl;
}
