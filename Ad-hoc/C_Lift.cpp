#include<bits/stdc++.h>
using namespace std;
//lift amar kache asbe(lp-mp) sec
//lift khulbe abar bondho hobe 2*3 sec
//ami dhukbo 5 sec
//amar floor the ground floor e nambe mp*4
//lift khulbe 3 sec , bondho hobe 5 sec

int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);
    
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int mp,lp;
        cin>>mp>>lp;
        int tm=(abs(lp-mp)*4)+(2*3)+5+mp*4+3+5; 
        cout<<"Case"<<" "<<i<<":"<<" "<<tm<<endl;
    }
    
   
    return 0;
}