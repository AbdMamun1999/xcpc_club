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

        int m;
        cin >> m;
        int d[m];
        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
        }

        map<int, int> mp1;
        for (int i = 0; i < m; i++)
        {
            mp1[d[i]]++;
        }

        map<int, int> mp2;
        for (int i = 0; i < n; i++)
        {
            mp2[b[i]]++;
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (mp1[b[i]] < mp2[b[i]])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}