#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);
    int n,d,r;
    while(cin>>n>>d>>r)
    {
        if(n==0 and d==0 and r==0) break;

        vector<int>s(n),b(n);
        for(int &x:s)
        cin>>x;
        for(int &y:b)
        cin>>y;
        sort(s.begin(),s.end());
        sort(b.begin(),b.end(),greater<int>());

        int tk=0;
        for(int i=0;i<n;i++)
        {
            int t=s[i]+b[i];
            if(t>d)
            {
                tk+=(t-d)*r;
            }
        }
        cout<<tk<<endl;
    }

    return 0;
}