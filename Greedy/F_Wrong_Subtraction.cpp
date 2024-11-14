#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    long long n,k;
    cin>>n>>k;
    while(k>0)
    {
        if(n%10!=0)
        n=n-1;
        else
        n=n/10;

        k--;
    }
    cout<<n<<endl;

    return 0;
}