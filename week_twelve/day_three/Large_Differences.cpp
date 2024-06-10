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
        int n, k;
        cin >> n >> k;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int res1 = 0;
        vector<int> dif;
        for (int i = 0; i < n; i++)
        {
            dif = ar;
            dif[i] = 1;
            int sum = 0;
            for (int j = 0; j < n - 1; j++)
            {
                sum += (abs(dif[j] - dif[j + 1]));
            }

            res1 = max(sum, res1);
        }

        int res2 = 0;
        for (int i = 0; i < n; i++)
        {
            dif = ar;
            dif[i] = k;
            int sum = 0;
            for (int j = 0; j < n - 1; j++)
            {
                sum += (abs(dif[j] - dif[j + 1]));
            }

            res2 = max(sum, res2);
        }

        cout << max(res1, res2) << '\n';
    }

    return 0;
}