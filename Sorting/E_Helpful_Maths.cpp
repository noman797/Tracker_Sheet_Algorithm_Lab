#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    string s;
    cin>>s;
    string ns;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        {
            ns.push_back(s[i]);
        }
    }

    for(int i=0;i<ns.size()-1;i++)
    {
        for(int j=0;j<ns.size()-i-1;j++)
        {
            if(ns[j]>ns[j+1])
            {
                swap(ns[j],ns[j+1]);
            }
        }
    }

    // sort(ns.begin(),ns.end());
    
    cout<<ns[0];
    for(int i=1;i<ns.size();i++)
    {
        cout<<"+"<<ns[i];
    }

    return 0;
}