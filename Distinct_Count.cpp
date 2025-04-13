
/*
problem link:https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/
aita vector diye kora jay 
kintu set diye korlam 
distinct count2 te vector diye solve kora hoise
ata map diyeo kora jave




*/

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
    set<int> se;

    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }
    if(se.size()==x)
    {
        cout << "Good" << nl;
    }
    else if (se.size() > x)
    {
        cout << "Average" << nl;
    }
    else
    {
        cout << "Bad" << nl;
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