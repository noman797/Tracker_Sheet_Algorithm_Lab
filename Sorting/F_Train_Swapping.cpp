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
    int n; cin>>n;
    vector<int>a(n); 
    for(int i=0;i<n;i++) cin>>a[i];
    
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            swap(a[j],a[j+1]);
            cnt++;
            }

        }
    }

    cout<<"Optimal train swapping takes"<<" "<<cnt<<" "<<"swaps."<<endl;
    }

    


    return 0;
}