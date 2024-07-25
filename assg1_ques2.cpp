#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin>>x;
    for(int i=0;i<x.size()/2;i++)
        swap(x[i],x[x.size()-i-1]);
    cout<<x;
}
