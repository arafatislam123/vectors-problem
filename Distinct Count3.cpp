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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    map<int, int> freq;
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }
    int cnt = 0;
    for (auto it = freq.begin(); it != freq.end(); it++)
    {
        if(it->second >= 1)
        {
            cnt++;
        }
    }
    if(cnt==x)
    {
        cout << "Good" << nl;
    }
   else if(cnt>x)
    {
        cout << "Average" << nl;
    }
    else
    {
        cout << "Bad " << nl;
    }

}

int main()
{
 ios_base::sync_with_stdio(0);
  cin.tie(0);
    int tc ;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}