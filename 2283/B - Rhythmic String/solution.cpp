#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    vector<ll> a(n);
    for (auto& x : a)
        cin >> x;
 
    sort(a.begin(), a.end());
 
    ll res = n;
    for (int i = 0; i < n; i++) {
        if (i > 0 && a[i] == a[i - 1])
            continue;
 
        ll cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] % a[i] == 0)
                cnt++;
        }
 
        res = min(res, n - cnt);
        if (res == 0)
            break;
    }
 
    cout << res << endl;
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
 
 