#include <iostream>
#include <climits>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 1)
        {
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
            }
            cout << "NO\n";
            continue;
        }

        int maxEven = INT_MIN;
        int minOdd = INT_MAX;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            if (i % 2 == 0)
                maxEven = max(maxEven, x);
            else
                minOdd = min(minOdd, x);
        }

        if (maxEven + 1 < minOdd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}