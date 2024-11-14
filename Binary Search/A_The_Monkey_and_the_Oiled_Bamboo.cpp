#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int t; cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n; cin>>n;
        vector<int>b(n);
        for(int &x:b) cin>>x;
        int l=1,h=b[n-1], ans=h;
        while(l<=h)
        {
            int mid=(l+h)/2;
            int k=mid, in=0;
            bool flag=true;
            for(int j=0;j<n;j++) 
            {
                int dif=b[j]-in;
                if(dif>k)
                {
                    flag=false;
                    break;
                }
                if(dif==k)
                    k--;
                in=b[j]; 
            }

            if(flag)
            {
                ans=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }

        cout<<"Case "<<i<<": "<<ans<<endl;
    }

    return 0;
}
