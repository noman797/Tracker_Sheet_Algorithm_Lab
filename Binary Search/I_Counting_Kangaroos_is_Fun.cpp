#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n; cin>>n;
    vector<int>a(n);
    for(int &x:a) cin>>x;
    sort(a.begin(),a.end());
    int l=0,r=n/2;
    int cnt = n;

    while(l<r and r<n)
    {
        if(a[r]>=2*a[l]){
        cnt--;
        l++;
        }
    else
    {
        r++;
    }
    }

    cout<<cnt<<endl;

    return 0;
}