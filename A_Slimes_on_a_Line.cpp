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
        int mn = INT_MAX, mx = INT_MIN;

        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;
            mn = min(mn, num);
            mx = max(mx, num);
        }

        cout << (mx - mn + 1) / 2 << '\n';
    }

    return 0;
}