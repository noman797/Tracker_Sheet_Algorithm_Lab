#include<bits/stdc++.h>
using namespace std;
//buns diye koita burger banano jabe = buns/2
//humburger ar chicken er modde kontar dam besi
//jetar besi dam seta sell kore+rest of burger
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        long long b,p,c;
        long long hb,cb;
        long long pro=0;
        cin>>b>>p>>c>>hb>>cb;
        if(b>=2)
        {
            long long d=b/2;
            
            if(hb>cb)
            {
                pro+=min(p,d)*hb;
                d-=min(p,d);
                pro+=min(c,d)*cb;
            }
            else
            {
                pro+=min(c,d)*cb;
                d-=min(c,d);
                pro+=min(p,d)*hb;
            }
        }

        cout<<pro<<endl;
    }
    

    return 0;
}