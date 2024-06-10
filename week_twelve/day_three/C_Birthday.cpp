#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
        {
            cout << ar[i] << " ";
        }

        for (int i = n - 1; i >= 1; i -= 2)
        {
            cout << ar[i] << " ";
        }
    }
    else
    {
        sort(ar, ar + n);

        for (int i = 0; i < n; i += 2)
        {
            cout << ar[i] << " ";
        }

        for (int i = n - 2; i >= 1; i -= 2)
        {
            cout << ar[i] << " ";
        }
    }
    return 0;
}