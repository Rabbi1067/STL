#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>a;
    a.insert(71);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    for(int b:a){
        cout<<b<<" ";
    }
    cout<<endl;
    //size
    cout<<a.size()<<endl;
    //max koto golu element rakte parbo
    cout<<a.max_size()<<endl;
   //find
   auto ans=a.find(2);
    if(ans!=a.end()) cout<<"Find"<<endl;
    else cout<<"No Find"<<endl;
    //count true or false
    cout<<a.count(24)<<endl;
    return 0;
}

