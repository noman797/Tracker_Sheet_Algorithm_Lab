#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);
    while(1)
    {
    int n; cin>>n;
    if(n==0) break;

    int cnt[100]={0};

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        cnt[x]++;
    }
    int f=1;
    for(int i=1;i<=99;i++)
    {
        for(int j=0;j<cnt[i];j++)
        {
            if(f==false)
            {
            cout<<" ";
            }
            cout<< i;
            f=0;
        }
    }
    cout<<endl;
    }

    return 0;
}