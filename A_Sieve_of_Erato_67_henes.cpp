#include <iostream>
#include <vector>
using namespace std;

bool backtrack(vector<int> &nums, int index, int multiplication)
{
    if (nums.size() == index || multiplication > 67)
        return false;

    for (int i = index; i < nums.size(); i++)
    {
        multiplication *= nums[i];
        if (multiplication == 67)
            return true;

        if (backtrack(nums, i + 1, multiplication))
            return true;

        multiplication /= nums[i];
    }
    return false;
}

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

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (backtrack(nums, i, 1))
            {
                cout << "YES\n";
                break;
            }
            if (i == n - 1)
                cout << "NO\n";
        }
    }

    return 0;
}