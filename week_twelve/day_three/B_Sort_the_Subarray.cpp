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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                l = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                r = i;
                break;
            }
        }

        int fl = -1, sr = -1;
        for (int i = l; i >= 1; i--)
        {
            if (b[i] >= b[i - 1])
            {
                fl = i - 1;
            }
            else
                break;
        }

        for (int i = r; i < n - 1; i++)
        {
            if (b[i + 1] >= b[i])
                sr = i + 1;
            else
                break;
        }

        if (fl == -1)
            cout << l + 1 << " ";
        else
            cout << fl + 1 << " ";

        if (sr == -1)
            cout << r + 1 << " ";
        else
            cout << sr + 1 << " ";

        cout << '\n';
    }

    return 0;
}