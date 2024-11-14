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
        int m=n;
        int rev=0;
        while(m!=0)
        {
            int rem=m%10;
            rev=rev*10+rem;
            m/=10;

        }
        if(rev==n)
        cout<<"Case"<<" "<<i<<": Yes"<<endl;
        else
        cout<<"Case"<<" "<<i<<": No"<<endl;  
    }

    return 0;
}