#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int a=s[i];
        int b=t[i];
        int d=abs(s[i]-t[i]);
        cnt+=min(d,10-d);
    }
    cout<<cnt<<endl;
    return 0;
}