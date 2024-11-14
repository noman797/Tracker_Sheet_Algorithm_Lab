#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int q;
    cin >> q;
    int l[q];
    for (int i = 0; i < q; i++)
        cin >> l[i];

    for (int i = 0; i < q; i++)
    {
        int luchu = l[i];

        int mx = INT_MIN;
        int mn = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (a[j] < luchu and a[j] > mx)
                mx = a[j];
            if (a[j] > luchu and a[j] < mn)
                mn = a[j];
        }

        if (mx == INT_MIN)
            cout << "X ";
        else
            cout << mx << " ";

        if (mn == INT_MAX)
            cout << "X" << endl;
        else
            cout << mn << endl;
    }

    return 0;
}
