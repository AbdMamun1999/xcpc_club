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
        string s;
        cin >> s;

        int first = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                first = i;
                break;
            }
        }

        int last = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                last = i;
                break;
            }
        }

        cout << (last - first) + 1 << '\n';
    }

    return 0;
}