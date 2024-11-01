#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int mx=INT_MIN;
        int sd=a[0];
        for(int k=1;k<n;k++)
        {
          int diff=sd-a[k];
          if(diff>mx) mx=diff;
          if(sd<a[k]) sd=a[k];
        }
        cout<<mx<<endl;

    }

    return 0;
}