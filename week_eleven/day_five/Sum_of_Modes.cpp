#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = n * (n + 1) / 2;
        unordered_map<ll, ll> same;
        same[0] = 1;
        ll z = 0, o = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
                z++;
            else
                o++;
            if (same.find(z - o) != same.end())
            {
                ans += same[z - o];
                same[z - o]++;
                continue;
            }
            same[z - o] = 1;
        }
        cout << ans << "\n";
    }

    return 0;
}