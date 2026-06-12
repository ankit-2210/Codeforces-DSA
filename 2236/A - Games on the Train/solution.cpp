#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    vector<ll> h(n);
    ll mn = INT_MAX;
    ll mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        mn = min(mn, h[i]);
        mx = max(mx, h[i]);
    }
 
    cout << mx - mn + 1 << endl;
 
 
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
 
 