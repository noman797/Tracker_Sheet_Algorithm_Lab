#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='.')
            {
                cnt++;
                j=j+2;
            }
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }

    return 0;
}