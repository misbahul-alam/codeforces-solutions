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

        while (n--)
        {
            int h;
            cin >> h;
            mn = min(mn, h);
            mx = max(mx, h);
        }

        cout << mx - mn + 1 << '\n';
    }

    return 0;
}