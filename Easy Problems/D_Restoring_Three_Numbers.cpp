#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    vector<int>a(4);
    for(int &x:a) cin>>x;
    sort(a.begin(),a.end());
    cout<<a[3]-a[0]<<" ";
    cout<<a[3]-a[1]<<" ";
    cout<<a[3]-a[2]<<" ";
    cout<<endl;

    return 0;
}