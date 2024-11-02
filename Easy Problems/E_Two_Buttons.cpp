#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b; cin>>a>>b;
    int cnt=0,ans=0;
    while(a!=b)
    {
        if(b>a)
        {
            if(b%2==0)
            {
                b=b/2;
                cnt++;
            }
            else
            {
                b++;
                cnt++;
            }
        }
        else if(a>b)
        {
             cnt+=a-b;
             b=a; 
        }
    }

    cout<<cnt<<endl;
    return 0;  
}