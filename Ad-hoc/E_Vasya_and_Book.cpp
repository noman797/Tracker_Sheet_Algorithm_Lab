#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x, y, d;
        cin >> n >> x >> y >> d;

        long long req = LLONG_MAX;

        if (abs(x - y) % d == 0)
        {
            req = abs(x - y) / d;
        }
        else
        {
            if ((y - 1) % d == 0)
            {
                long long pre = ceil((x - 1) / (double)d) + (y - 1) / d;
                req = min(pre, req);
            }
            if ((n - y) % d == 0)
            {
                long long pre = ceil((n - x) / (double)d) + (n - y) / d;
                req = min(pre, req);
            }
        }

        if (req == LLONG_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << req << endl;
        }
    }

    return 0;
}
