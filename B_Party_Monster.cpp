#include <iostream>
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

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            if (ch == '(')
            {
                ans++;
            }
            else
            {
                ans--;
            }
        }
        if (ans == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}