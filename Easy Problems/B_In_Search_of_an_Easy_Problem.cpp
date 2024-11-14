#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            flag=1;
            break;
        }
    }

    if(flag) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;

    return 0;
}