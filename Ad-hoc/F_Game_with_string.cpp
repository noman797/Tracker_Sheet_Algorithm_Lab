#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty() == false and st.top() == s[i])
            st.pop();
        else
            st.push(s[i]);
    }

    int rmv = (s.size() - st.size()) / 2;

    if (rmv % 2 == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}