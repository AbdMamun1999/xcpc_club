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
        int s[n], e[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i] >> e[i];
        }

        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (s[i] >= s[0] && e[i] >= e[0])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << s[0] << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}