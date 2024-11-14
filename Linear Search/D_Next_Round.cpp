#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[m - 1] and a[i] > 0)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}