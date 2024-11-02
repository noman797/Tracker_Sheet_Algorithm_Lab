#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0, g = 1; i < n; i += g, g++)
    {
        cout << s[i];
    }

    return 0;
}