#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a= {1,2,5,3,4};
//sort acending
    sort(a.begin(),a.end());
    for (int num : a)
    {
        cout << num << " ";
    }
    cout<<endl;
    //sort decending
    sort(a.rbegin(),a.rend());
    for (int num : a)
    {
        cout << num << " ";
    }
    cout<<endl;
    return 0;
}
