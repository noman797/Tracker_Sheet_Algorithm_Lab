#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(char x:s)
    {
        if(x=='8')
        cnt++;
    }
    int d=s.size()/11;
    int req=cnt;
    if(cnt<d) cout<<cnt<<endl;
    else cout<<d<<endl;

    return 0;
}