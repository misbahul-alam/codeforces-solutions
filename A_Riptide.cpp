#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(a.begin(), a.end());

        int ans = 0;

        while (a[0] != a[1] && a[1] != a[2])
        {
            a[0]++;
            a[2]--;
            ans++;
            sort(a.begin(), a.end());
        }

        cout << ans << "\n";
    }

    return 0;
}