#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
bool solve1(ll n, ll k, ll start, string& res) {
    ll b = n - k;
 
    vector<ll> cnt(2);
    cnt[0] = n / 2;
    cnt[1] = n - cnt[0];
 
    vector<ll> block(2);
    block[start] = (b + 1) / 2;
    block[start ^ 1] = (b / 2);
 
    if (block[0] > cnt[0] || block[1] > cnt[1])
        return false;
 
    cnt[0] -= block[0];
    cnt[1] -= block[1];
 
    vector<ll> len(b, 1);
    for (int i = 0; i < b; i++) {
        int bit = (i % 2 == 0 ? start : start ^ 1);
        int add = min(cnt[bit], n);
 
        len[i] += add;
        cnt[bit] -= add;
    }
 
    if (cnt[0] || cnt[1])
        return false;
 
    res.clear();
    for (int i = 0; i < b; i++) {
        char ch = (i % 2 == 0 ? start : start ^ 1) + '0';
        res.append(len[i], ch);
    }
 
    return true;
 
}
 
void solve() {
    ll n, k;
    cin >> n >> k;
 
    string res = "";
    if (solve1(n, k, 0, res)) {
        cout << res << endl;
        return;
    }
    if (solve1(n, k, 1, res)) {
        cout << res << endl;
        return;
    }
 
    cout << -1 << endl;
 
 
}
 
int main()
{
    ll t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}
 
 