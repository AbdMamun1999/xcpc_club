#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (min(n, x + 1) < k)
            cout << -1 << '\n';
        else
        {
            int sum = 0;
            sum += ((k * (k - 1)) / 2);
            int rest = n - k;

            if (x != k)
                sum += (x * rest);
            else
                sum += ((k - 1) * rest);

            cout << sum << '\n';
        }
    }

    return 0;
}