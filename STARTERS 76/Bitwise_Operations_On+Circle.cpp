#include <bits/stdc++.h>
// #include "atcoder/all"
// using namespace atcoder;
using namespace std;
using ll = long long;
const int MOD1000000007 = 1000000007;
const int MOD998244353 = 998244353;
const double PI = 3.14159265358979323846264338327950288;

void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // #ifdef LOCAL
    // 	freopen("input.txt", "r", stdin);
    // #endif
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    // #ifdef LOCAL
    // 	printf("\nTime elapsed: %.2fs.\n", 1.0 * clock() / CLOCKS_PER_SEC);
    // #endif
    return 0;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> a(2 * n + 1, vector<int>(30, 0));
        vector<int> arr(2 * n + 1);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            arr[i] = arr[i + n] = x;
            for (int j = 0; j < 30; j++)
            {
                if ((x >> j) & 1)
                    a[i][j]++, a[i + n][j]++;
            }
        }
        for (int i = 1; i <= 2 * n; i++)
        {
            for (int j = 0; j < 30; j++)
                a[i][j] += a[i - 1][j];
        }
        function<int(int, int)> cal_or = [&](int i, int j)
        {
            int ans = 0;
            for (int k = 0; k < 30; k++)
            {
                if (a[j][k] > a[i - 1][k])
                    ans += (1 << k);
            }
            return ans;
        };
        function<int(int, int)> cal_and = [&](int i, int j)
        {
            int ans = 0;
            for (int k = 0; k < 30; k++)
            {
                if (a[j][k] - a[i - 1][k] == j - i + 1)
                    ans += (1 << k);
            }
            return ans;
        };

        vector<int> last(30, -1);
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int x = arr[i];
            for (int j = 0; j < 30; j++)
            {
                if ((x >> j) & 1)
                    last[j] = i;
            }
        }
        for (int i = n + 1; i <= 2 * n; i++)
        {
            ans = max(ans, arr[i] - cal_and(i - n + 1, i - 1));

            int x = arr[i];
            for (int j = 0; j < 30; j++)
            {
                if (((x >> j) & 1) == 0 && last[j] > i - n + 1)
                {
                    int c1 = cal_or(last[j], i);
                    int p = cal_and(i - n + 1, last[j] - 1);
                    ans = max(ans, c1 - p);
                }
                if ((x >> j) & 1)
                    last[j] = i;
            }
        }
        cout << ans << endl;
    }
}