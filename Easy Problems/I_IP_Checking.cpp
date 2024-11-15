#include<bits/stdc++.h>
using namespace std;

bool binary(int a,long long b)
{
    int ans=0; int cnt=0;
    while(b!=0)
    {
        if(b%10==1)
        {
            ans+=pow(2,cnt);
        }
        b=b/10;
        cnt++;
    }

    return ans==a;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b,c,d; char l;
        cin>>a>>l>>b>>l>>c>>l>>d;
        long long p,q,r,s;
        cin>>p>>l>>q>>l>>r>>l>>s;
        if(binary(a,p) and binary(b,q) and binary(c,r) and binary(d,s))
        {
            cout<<"Case "<<i<<":"<<" "<<"Yes"<<endl;
        }
        else
        {
             cout<<"Case "<<i<<":"<<" "<<"No"<<endl;
        }

    }
    return 0;
}