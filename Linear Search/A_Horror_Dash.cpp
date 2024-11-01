#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
            cin >> a[j];

        int maxx = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            if (a[j] > maxx)
            {
                maxx = a[j];
            }
        }
        cout << "Case " << i << ": " << maxx << endl;
    }

    return 0;
}
