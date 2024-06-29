#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            int y = b[i] % m;
            mp[y]++;
        }

        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            int x =  m - (a[i]) % m;  
            ans += mp[x % m];
        }

        cout << ans << endl;
    }

    return 0;
}
