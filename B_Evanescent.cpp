#include <bits/stdc++.h>
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
        string s;
        cin >> n >> s;

        int r = 1;

        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                r++;
        }

        bool can1 = false, can2 = false;

        for (int i = 1; i < n - 1; i++)
        {

            if (s[i] != s[i - 1] && s[i] != s[i + 1])
            {
                can1 = true;

                if (s[i - 1] == s[i + 1])
                    can2 = true;
            }
        }

        if (can2)
            cout << r - 2 << "\n";
        else if (can1)
            cout << r - 1 << "\n";
        else
            cout << r << "\n";
    }
    return 0;
}