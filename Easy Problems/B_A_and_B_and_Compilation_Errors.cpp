#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,e;
    cin>>n;
    int s1=0,s2=0,s3=0;

    for(int i=0;i<n;i++)
    {
        cin>>e;
        s1+=e;
    }

    for(int i=0;i<n-1;i++)
    {
        cin>>e;
        s2+=e;
    }

    for(int i=0;i<n-2;i++)
    {
        cin>>e;
        s3+=e;
    }

    cout<<s1-s2<<endl<<s2-s3<<endl;

}