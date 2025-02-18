#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<type> vectorName.
    vector<int>a= {1,2,3,4}; //Create a Vector
    //Access a Vector
    cout<<a[2]<<endl;
    for(int b:a)
    {
        cout<<b<<" ";
    }
    cout<<endl;
    vector<string>car= {"Rabbi","Bangla","Dhaka"};
    cout<<car[1]<<endl;
    for(string b:car)
    {
        cout<<b<<" ";
    }
    cout<<endl;
    //or
    for (int i = 0; i < car.size(); i++)
    {
        cout << car[i] << " ";
    }
    cout<<endl;
    cout<<car.front()<<endl;;
    cout<<car.back()<<endl;
    cout<<endl;
//Change a Vector Element
    car[1]="Naogran";
    for(string b:car)
    {
        cout<<b<<" ";
    }
    cout<<endl;

    //Add Vector Elements
    a.push_back(5);
    for(int b:a)
    {
        cout<<b<<" ";
    }
    cout<<endl;
    //Remove Vector Elements
    a.pop_back();
    for(int b:a)
    {
        cout<<b<<" ";
    }
    cout<<endl;
    //Vector Size
    cout<<car.size()<<endl;
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;//size ay double
}

