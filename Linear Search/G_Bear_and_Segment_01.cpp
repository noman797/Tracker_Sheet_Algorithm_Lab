#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int f1=-1,f2=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                if (f1==-1)
                    f1=i;
                f2 = i;
            }
        }
        if(f1==-1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool f=true;
        for(int i=f1;i<=f2;i++)
        {
            if(s[i]=='0')
            {
                f=false;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
