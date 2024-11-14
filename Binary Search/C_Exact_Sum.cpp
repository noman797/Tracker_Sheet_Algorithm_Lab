#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    while(cin>>n)
    {
        vector<int>a(n);
        for(int &x:a) cin>>x;

        int t; cin>>t;
        sort(a.begin(),a.end());
        int l=0,r=n-1;
        int b=0,c=0;

        while(l<r)
        {
            int s=a[l]+a[r];

            if(s==t)
            {
                b=a[l];
                c=a[r];
                l++; r--;
            }
            else if(s<t)
            {
                l++;
            }
            else
            {
                r--;
            }
        }

        cout<<"Peter should buy books whose prices are "<<b<<" and "<<c<<"."<<endl<<endl;
    }

    return 0;
}