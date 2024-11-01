#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int h[100], g[100];

    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> g[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (h[i] == g[j])
                    cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}