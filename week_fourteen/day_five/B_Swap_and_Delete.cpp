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
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;

        for (auto ch : s)
        {
            if (ch == '1')
                cnt1++;
            else if (ch == '0')
                cnt0++;
        }

        int idx = 0;
        for (auto ch : s)
        {
            if (ch == '1')
            {
                if (cnt0 == 0)
                    break;
                cnt0--;
            }
            else if (ch == '0')
            {
                if (cnt1 == 0)
                    break;
                cnt1--;
            }
        }

        cout << cnt0 + cnt1 << '\n';
    }

    return 0;
}