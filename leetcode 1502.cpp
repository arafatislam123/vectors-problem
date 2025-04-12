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
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'I')
        {
            ans = ans + 1;
        }
        else if (s[i] == 'V')
        {
            ans = ans + 5;
        }
        else if (s[i] == 'X')
        {
            ans = ans + 10;
        }
        else if (s[i] == 'L')
        {
            ans = ans + 50;
        }
        else if (s[i] == 'C')
        {
            ans = ans + 100;
        }
        else if (s[i] == 'D')
        {
            ans = ans + 500;
        }
        else if (s[i] == 'M')
        {
            ans = ans + 1000;
        }
    }
    cout << ans << nl;
}


int main()
{
 ios_base::sync_with_stdio(0);
  cin.tie(0);
    int tc = 1;
    //cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}