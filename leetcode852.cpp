#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define nl '\n'
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define ALL(v) (v).begin(), (v).end()
#define rALL(v) (v).rbegin(), (v).rend()

#define show(x) cout << #x << " : " << x << endl

void solve(int tc)
{
    int n;
    cin >> n;
    vector<int> v;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> v2 = v;
    sort(v.begin(), v.end());

    int a = v.back(); // You might want to make this input or change it

    int l = 0, r = n - 1; // Corrected bounds (0 to n-1 for 0-based indexing)
    int ans = -1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (v2[mid] == a)
        {
            ans = mid;
            r = mid - 1; // To find first occurrence (optional)
            // Or break; if you just want any occurrence
        }
        else if (a < v2[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}