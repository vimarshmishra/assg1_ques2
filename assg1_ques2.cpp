#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>arr;
    for(int i=0;i<9;i++)
    {

        arr.push_back(rand()%100);
    }
    float x=0;
    for(auto i:arr)
        x+=i;
    cout<<x/9;
}
