#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int cnt=0;
    char c='a';
    for(char ch:s)
    {
        int d=abs(ch-c);
        cnt+=min(d,26-d);
        c=ch;
    }
    cout<<cnt<<endl;
    return 0;
}