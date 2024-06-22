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
        int n;
        cin >> n;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int XOR = 0;
        for (int i = 0; i < n; i++)
        {
            XOR ^= ar[i];
        }

        if (XOR == 0)
            cout << 0 << '\n';
        else if (n % 2 != 0)
            cout << XOR << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}