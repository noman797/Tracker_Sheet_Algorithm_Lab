#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    while (cin >> n >> k)
    {
        int cig = n;
        int bt = n;

        while (bt >= k)
        {
            int notun = bt / k;
            cig += notun;
            bt = bt % k + notun;
        }
        cout << cig << endl;
    }
    return 0;
}